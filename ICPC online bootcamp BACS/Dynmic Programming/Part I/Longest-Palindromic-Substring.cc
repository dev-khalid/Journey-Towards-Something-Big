#include<bits/stdc++.h>
using namespace std; 
int dp[1005][1005]; 
int func(string s,int b,int e) { 
    if(b>=e) return 1; 
    if(dp[b][e] !=-1) 
        return dp[b][e]; 
    if(s[b] == s[e]) 
        return dp[b][e] = func(s,b+1,e-1); 
    else 
        return dp[b][e] = 0; 
}
int main() {  
    memset(dp,-1,sizeof dp); 
    string s; 
    cin >> s; 
    int n = s.size(); 
    int mx = 0,b=0,e=0; 
    for(int i = 0; i < n; i++) { 
        for(int j = i+1; j < n; j++) { 
            if(func(s,i,j)) { 
                cout << "For which ones they are getting hited " << i << " " << j << endl; 
                if(mx < j-i+1) { 
                    mx = j-i+1,b = i,e = j; 
                }
            }
        }
    }
    cout << mx << b << e << endl; 
    cout << s.substr(b,e-b+1); 
}