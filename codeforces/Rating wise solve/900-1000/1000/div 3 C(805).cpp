#include<bits/stdc++.h>
using namespace std;
struct custom_pair
{
    int f = INT_MAX;
    int l = INT_MIN;
};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        map<int,custom_pair> mp;
        int station;
        for(int i = 0; i < n; i++)
        {
            cin >> station;
            mp[station].f = min(mp[station].f,i);
            mp[station].l = max(mp[station].l,i);
        }
        int left,right;
        for(int i = 0; i < k; i++)
        {
            cin >> left >> right;

            cout << (mp[left].f<mp[right].l?"YES\n":"NO\n");

        }
    }
}
