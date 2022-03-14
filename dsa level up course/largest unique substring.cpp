#include<bits/stdc++.h>
using namespace std;
pair<int,int> longestUniqueSubstring(string s) {
    unordered_map<char,int> hsh; //this will be used to store the last occurance of a number with + 1
    int n = s.size();
    int mx = 0,starting=0;
    pair<int,int> ans = {0,0};
    for(int i = 0; i < n; i++) {
        //check if the duplicate belongs to the current window or not .

        if(hsh[s[i]] && starting<hsh[s[i]]) {
            int windw = i-starting;
            if(mx <= windw) {
                mx = windw;
                ans = {starting,i-1};
            }
            starting = hsh[s[i]];//pointing right after the duplication

        } else {
            hsh[s[i]] = i + 1;
            cout << s[i] << " " << hsh[s[i]] << " \n";
            if(i==n-1) {
                //this is the last index and it's not a duplicate of any element in current
                //window so need to finish this
                int windw = i-starting+1;
                if(mx <= windw)
                {
                    mx = windw;
                    ans = {starting,i};
                }
            }
        }


    }
    //we will display max and max indexes also .
    cout << mx << endl;
    return ans;
}
int main() {
    string s("Prateekbhaiyo");
    pair<int,int> x;
    x = longestUniqueSubstring(s);
    cout << x.first << " " << x.second;
}


