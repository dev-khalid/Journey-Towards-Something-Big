
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        map<string,int> mp;

        int n;
        cin >> n;
        vector<vector<string>> words(3,vector<string>(n));
        string s;
        for(int row = 0; row < 3; row++)
            for(int i =0; i < n; i++)
            {
                cin >> s;
                words[row][i] = s;
                mp[s]++;
            }
        vector<int> ans;
        for(int i = 0; i < 3; i++) {
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                s = words[i][j];
                if(mp[s]==1) {
                    cnt+=3;
                } else if(mp[s] == 2) {
                    cnt+=1;
                }
            }
            ans.push_back(cnt);
        }
        for(auto it: ans) {
            cout << it << " ";
        }
        cout << endl;


    }
}

