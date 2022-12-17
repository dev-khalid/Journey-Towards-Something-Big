#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        deque<int> d;
        //if there is at least 2 elements then pick only one from that ...
        for(int i = 0; i < n; i++) {
             if(i&1) {
                cout << v[i] << " ";
             }
             else {
                d.push_front(v[i]);
             }
        }
        for(auto it: d) {
            cout << it << " ";
        }
        cout << endl;
}

