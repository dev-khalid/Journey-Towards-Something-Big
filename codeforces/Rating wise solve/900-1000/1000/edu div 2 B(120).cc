#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v) {
    for(auto it: v) {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        string s;
        cin >> s;
        vector<pair<int,int>> dis,like;
        for(int i = 0; i < n; i++) {
            if(s[i]=='1') {
                like.push_back({v[i],i});
            } else {
                dis.push_back({v[i],i});
            }
        }
        sort(dis.begin(),dis.end(),[](pair<int,int> a,pair<int,int> b)
        {
            return a.first < b.first;
        });

        sort(like.begin(),like.end(),[](pair<int,int> a,pair<int,int> b)
        {
             return a.first < b.first;
             });
        int d = dis.size();
        //now change the elements till d
        for(int i = 0; i < d; i++) {
            //index of that element
            int id = dis[i].second;
            v[id] = i+1;
        }
        for(int i = 0; i < like.size(); i++) {
            //index of that element
            int id = like[i].second;
            v[id] = d+i+1;
        }
        print(v);
    }
}

//found an awesome way of implementation .

