
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll power(ll base)
{
    ll ans = 1;
    while(base--)
    {
        ans*=2LL;
    }
    return ans;
}
int main()
{
    ll n,k;
    cin >> n >> k;
    //n jai hok na ken k er value oitai hobe ?
    if(k%4==1 || k%4==3)
    {
        cout << 1 << endl;
    }
    else if(k%4==2)
    {
        cout << 2 << endl;
    }
    else
    {
        ll base = log2(k);
        ll dif;
        ll prevK = k;
        while(1)
        {

            dif = prevK-power(base);
            if(dif==0)
            {
                cout << base + 1LL << endl;
                break;
            }
            prevK = dif;
            base = log2(dif);
        }
    }
}
