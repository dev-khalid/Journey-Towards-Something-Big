#include<bits/stdc++.h>
using namespace std;
bool checker(int a,int b,int k)
{
    return abs(a-b) <= k;
}
int main()
{
    int t;
    cin >> t;
    int c=1;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> r;
        string s;
        vector<pair<int,int>> p1,p2;
        for(int i = 0; i < n; i++) {
            cin >> r[i];
        }
        bool lft = false,lfs=false;
        for(int i = 0; i < n; i++) {
            cin >> s;
            if(s=="sci-fi") {

                if(lft) {
                    lfs = true;
                }
                else if(lfs) {

                } else {
                    lft = true;
                }
            }
            if(s=="thriller") {

            }
        }

    }
}
