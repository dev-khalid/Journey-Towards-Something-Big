//****************************Template Begins****************************//

// Header Files
#include<bits/stdc++.h>
// Header Files End

using namespace std;
#define DIVYA ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(i=a;i<=b;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define sort0(v) sort(all(v))
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define sz(x) (ll)x.size()
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define inf 1000000000000000005
const ll mod = 1e9 + 7;

ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
//****************************Template Ends*******************************//
/*

let's say we remove 1 to i ans j to n
cost of removal =
    max((psum0[j-1] - psum0[i]) ,( psum1[i] + tot1 - psum1[j-1] ) )

    psum0[j-1] - psum0[i] = psum1[i] + tot1 - psum1[j-1]

    j-1 = i + tot1
    j = i + tot1 + 1

*/
int main() {
    DIVYA;
    ll t, n, i, j, ans, temp, sum;
    string sans,s;
    t = 1;
    cin >> t;
    while (t--)
    {
        sans = "NO";
        ans = temp = sum = 0;
        cin >> s;
        n = sz(s);
        vll a(n+1,0);
        ll last_1 = n+1;
        vll zeros;
        vll psum0(n+2),psum1(n+2);
        fo(i,1,n)
        {
            a[i] = (s[i-1]-'0');
            if(a[i] == 1)last_1 = i;
            else zeros.pb(i);
            psum0[i] = psum0[i-1] + (a[i] == 0);
            psum1[i] = psum1[i-1] + (a[i] == 1);
        }
        ll tot = count(all1(a),1);

        ans = min(tot,n-tot);


        fo(i,0,n)
        {
            ll k = i + tot + 1;
            if(k>n)k = n+1;
            ans = min(ans,psum1[i] + tot - psum1[k-1] );
        }

        cout<<ans<<"\n";


    }
    return 0;
}






