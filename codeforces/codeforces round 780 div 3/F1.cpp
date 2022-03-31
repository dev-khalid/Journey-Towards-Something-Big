

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
         string s;
         cin >> s;
         int cnt = 0;
         for(int i = 1; i < n; i++ ) {
            if(s[i]=='+') {
                if(s[i-1]=='-') {
                    cnt++;
                }
            } else {
                //-
                if(i-1>0) {
                   if(s[i-1]=='+') {
                    cnt++;
                   }
                }
                if(i-2>0) {
                    if(s[i-2]=='-'&&s[i-1]=='-') {
                        cnt++;
                    }
                }
            }
         }
         for(int i = n-2; i >=0 ; i-- ) {
            if(s[i]=='+') {
                if(s[i+1]=='-') {
                    cnt++;
                }
            } else {
                //-
                if(i+1<n) {
                   if(s[i+1]=='+') {
                    cnt++;
                   }
                }
                if(i+2<n) {
                    if(s[i+2]=='-'&&s[i+1]=='-') {
                        cnt++;
                    }
                }
            }
         }
         //check if the array is balanced then the output should be cnt+1;
         cout << cnt << endl;

    }
}

