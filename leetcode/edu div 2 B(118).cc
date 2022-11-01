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
        vector<ll> v(n);
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        int cnt = 0;
        vector<pair<int,int>> ans;
        for(int i = 0; i<n && cnt < (n/2); i++)
        {
            for(int j = i+1; j<n && cnt < (n/2); j++)
            {
                if(v[i]!=v[j])
                {
                    ll md = v[i]%v[j];
                    ll mdi = v[j]%v[i];
                    if(mp.find(md)==mp.end())
                    {
                        cnt++;
                        ans.push_back({v[i],v[j]});
                    }
                    if(mp.find(mdi)==mp.end()) {
                        cnt++;
                        ans.push_back({v[j],v[i]});
                    }
                }

            }
        }
        for(auto it: ans) {
            cout << it.first << " " << it.second << endl;
        }

    }
}
//found the best solution in the tutorial section .
//they applied the idea that .. if y is min .. x%y will be lesser than y . so choosing y as the min
//will get me the ans . cause there is no element exist less than y . that way awesome .

