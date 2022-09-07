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
        vector<int> pos;
        pos.push_back(0);
        int x;
        for(int i = 1; i <= n; i++) {
            cin >> x;
            if(!x) pos.push_back(i);

        }
        pos.push_back(n+1);
        int cnt = 0;
        for(int i = 1; i < pos.size(); i++) {
            if(pos[i]-pos[i-1]>1) {
                cnt++;
            }
        }
        cout << (cnt>2? 2 : cnt) << endl;
        /*
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int i = 0;
        while(i<n&&v[i]==0){i++;}
        if(i==n) {
            cout << 0 << endl;
        } else {
            int cnt = 0;
            while(i<n) {
                if(!v[i]) {
                    cnt++; //it can be shown that for at least one time ti while loop will run
                    i++;
                    while(i<n && v[i]==0) {
                        i++;
                    }
                } else {
                    i++;
                }
            }
            if(v[n-1]!=0) {
                cnt++;
            }
            cout << cnt << endl;
        }
        */
    }
}
//make all of them as 1 then destroy. if from ai to aj && ai != 0 aj !=0 && they contains zero inside
