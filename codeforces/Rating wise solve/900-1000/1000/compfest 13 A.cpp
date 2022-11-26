#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<pair<string,int>> v(n);
    for(int i = 0; i <n; i++)
    {
        cin >> v[i].first;
        v[i].second = i+1;

    }
    for(int j = 0; j < n; j++)
    {
        for(int i = 1; i < m; i+=2)
        {

            v[j].first[i] = ('Z'-v[j].first[i])+'A';
        }
    }
    sort(v.begin(),v.end(),[](pair<string,int> a,pair<string,int> b)
    {
        return a.first<b.first;
    });
    for(auto it: v)
    {
        cout << it.second << " ";
    }

}
