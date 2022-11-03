#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<vector<char>> v(n,vector<char>(n,'0'));
        int twos = 0;
        for(auto it: s) {
            if(it=='2')
            {

                 twos++;
            }
        }
        if(twos>2 || twos==0) {
            for(int i = 0; i < n; i++) {
                //check if current element is 2 and already there is a win or not
                bool win = false;
                for(int j = 0; j < n; j++) {
                    if(v[i][j]=='+') {
                        win = true;
                        break;
                    }
                }

                for(int j = 0; j < n; j++) {
                    if(v[i][j]!='0') {
                        continue;
                    }


                    if(i==j) {
                        //principal diagonal
                        v[i][j] = 'X';
                    } else {

                        if(s[i]=='1' && s[j]=='1') {
                            v[i][j] = '=';
                            v[j][i] = '=';
                        }
                        if(s[i]=='1' && s[j]=='2') {
                            v[i][j] = '+';
                            v[j][i] = '-';
                        }
                        if(s[i]=='2' && s[j]=='1') {
                            v[i][j] = '-';
                            v[j][i]= '+';
                        }
                        if(s[i]=='2' && s[j]=='2') {
                            if(win) {
                                //already there is a win ..
                                v[i][j] = '-';
                                v[j][i] = '+';
                            } else {
                                win = true;
                                v[i][j] = '+';
                                v[j][i] = '-';
                            }
                        }
                    }
                }
            }
            cout << "YES\n";
            for(auto it: v) {
                for(auto el: it) {
                    cout << el;
                }
                cout << "\n";
            }
        } else {
            cout << "NO\n";
        }
    }
}


