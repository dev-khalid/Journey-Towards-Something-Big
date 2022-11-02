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
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<pair<int,int>> seq;
        int start = v[0];
        int left = 0, right = 0;
        seq.push_back({start,0});
        for(int i = 1; i < n; i++)
        {
            if(v[i]<start)
            {
                //this should be at last position
                seq.push_back({v[i],--left});
                start = v[i];
            }
            else
            {
                seq.push_back({v[i],++right});
            }
        }
        sort(seq.begin(),seq.end(),[](pair<int,int> a,pair<int,int> b)
        {
            return a.second < b.second;
        });
        for(auto it: seq)
        {
            cout << it.first << " ";
        }
        cout << endl;
    }

}
