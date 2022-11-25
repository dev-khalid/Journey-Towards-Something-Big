#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,bool> mp;
void preCalc()
{
    for(ll i = 1; i <= 10000; i++)
    {
        mp[i*i*i] = true;
    }
}
int main()
{
    preCalc();
    int t;
    cin >> t;
    while(t--)
    {
        ll x;
        cin >> x;
        ll i = 1LL;
        bool found = false;
        while((i*i*i)<x)
        {
            if(mp.find(x-(i*i*i)) != mp.end() && mp[x-(i*i*i)]) {
                found = true;
            }
            i++;
        }
        cout << (found ? "YES": "NO") << endl;
    }
}
