#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll counter(ll x)
{

    if(x&1)
    {
        return (x+1LL)/2LL * x;
    }
    else
    {
        return (x)/2LL * (x+1LL);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> mask(32,0);
        int n;
        cin >> n;
        ll it;
        ll cnt = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> it;
            //find it's mask
            int maxPos = log2(it)+1;
            mask[maxPos]++;
        }
        for(int i = 0; i < 31; i++) {
            if(mask[i]>1)
            cnt += counter(mask[i]-1);
        }
        cout << cnt << endl;

    }
}

