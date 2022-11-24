#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int,int>> v(n);
        vector<int> ele(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            ele[i] = v[i].first;
            v[i].second = i;
        }
        sort(v.begin(),v.end(),[](pair<int,int> &a,pair<int,int> &b)
        {
            return a.first > b.first;
        });

        int last = n;
        int cnt = 0;
        for(auto it: v)
        {
            //cout << "iterating for : " << it.first << endl;
            int start = it.second;
            if(cnt==n)
            {
                break;
            }
            if(start<last)
            {
                for(int i = start; i<last; i++)
                {
                    cout << ele[i] << " ";
                    cnt++;
                }
                last = it.second;
            }
        }
        cout << "\n";

    }
}
