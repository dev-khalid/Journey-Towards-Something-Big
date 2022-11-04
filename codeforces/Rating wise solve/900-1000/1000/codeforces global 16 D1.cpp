#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        vector<int> v(m);
        for(int i = 0; i < m; i++) {
            cin >> v[i];
        }
        vector<int> s = v;
        sort(s.begin(),s.end());
        //not lower bound actually .
        //fill up the seat and count each time
        vector<int> fill(m,0);
        int sum = 0;
        for(int i = 0; i < m; i++) {
            //now check where the current elements location should be
            int sp = lower_bound(s.begin(),s.end(),v[i])-s.begin(); //starting position
            int ep = upper_bound(s.begin(),s.end(),v[i])-s.begin(); //ending position
            //cout << "Starting and ending position : " << sp << " " << ep << " for element : " << v[i] << endl;
            for(ep = ep-1; ep>=sp; ep--) {
                if(fill[ep]==0) {
                    //cout << "Filling up position : " << ep << endl;
                    fill[ep] = v[i];
                    break;
                }
            }


            for(int i = 0; i < ep; i++) {
                if(fill[i]!=0) {
                    sum++;
                }
            }
        }
        cout << sum << endl;
    }
}
