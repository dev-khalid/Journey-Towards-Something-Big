#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i]=='L') sum+=i;
            else sum += (n-1-i);
        }
        vector<ll> ans;
        for(int i = 0; i < (n/2); i++)
        {
            if(s[i]=='L')
            {
                //r hobe
                sum-=(i);
                sum+=(n-i-1);
                ans.push_back(sum);
            }
            if(s[n-i-1]=='R')
            {
                //l hobe
                sum-=i;
                sum+=(n-i-1);
                ans.push_back(sum);
            }
        }
        for(auto it: ans)
        {
            cout << it << " ";
        }
        int k = ans.size();

        for(int i = 0; i < n-k; i++)
        {
            cout << sum << " ";
        }
        cout << "\n";
    }
}
