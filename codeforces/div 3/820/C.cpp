#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int cost = abs(s[0]-s[n-1]);
        unordered_map<char,vector<int>> mp;
        int jm = 0;
        vector<int>used(26,0);
        for(int i = 0; i < n; i++)
        {
            char c = s[i];
            if(c>=min(s[0],s[n-1]) && c<=max(s[0],s[n-1]))  {
                mp[c].push_back(i+1);
                jm++;
                used[c-'a'] = 1;
            }
        }
        cout << cost << " " << jm << endl;
        //now print those paths
        if(s[0]>s[n-1]) {
            for(int i = 25; i >= 0; i--) {
                if(used[i]) {
                    char c = (char)(i+'a');
                    vector<int> v = mp[c];
                    for(auto it: v) {
                        cout << it << " ";
                    }
                }
            }
        }
        else {
            for(int i = 0; i < 26; i++) {
                if(used[i]) {
                    char c = (char)(i+'a');
                    vector<int> v = mp[c];
                    for(auto it: v) {
                        cout << it << " ";
                    }
                }
            }

        }
        cout << endl;

    }
}
