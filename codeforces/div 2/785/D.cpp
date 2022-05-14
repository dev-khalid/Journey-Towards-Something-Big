#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
    if(a==0) return b;
    return (b%a,a);
}
vector<ll> divisorsOfNumber(ll n)
{
    vector<ll> divisors;
    vector<ll> v;
    for(ll i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                divisors.push_back(i);
            }
            else
            {
                divisors.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    for(ll i = v.size()-1; i>=0; i--)
    {
        divisors.push_back(v[i]);
    }
    return divisors;
}
bool isValuePresentInSequence(ll val,ll start,ll diff,ll n)
{
    if(val >= start && ((val-start)%diff)==0 && ((val-start)/diff<n))
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll b1,bd,bn,c1,cd,cn;
        cin >> b1 >> bd >> bn >> c1 >> cd >> cn;
        ll cEnd = c1+(cn-1)*cd;
        if(!isValuePresentInSequence(c1,b1,bd,bn)
                || !isValuePresentInSequence(cEnd,b1,bd,bn)||
                (cd%bd)!= 0)
        {
            cout << "0\n";
            continue;
        }
        ll ans = 0;
        ll cPrev = c1-cd,cNext = cEnd+cd;
        if(!isValuePresentInSequence(cPrev, b1, bd, bn) || !isValuePresentInSequence(cNext, b1, bd, bn))  {
            cout << "-1\n";
            continue;
        }
        ll ans = 0;
        vector<ll> div = divisorsOfNumber(cd);
        for(auto ad: div) {
            if((ad*bd)/gcd(ad,bd) < cd) {
                continue;
            }
        }
    }
}
