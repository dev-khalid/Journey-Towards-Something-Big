#include<bits/stdc++.h>
using namespace std;
bool checker(vector<int> &v,int n) {
    for(int i = 0; i < n; i++) {
        int prev_index = (i-1+n)%n;
        int next_index = (i+1)%n;
        if((v[i] < v[prev_index] && v[i] < v[next_index]) || (v[i] > v[prev_index] && v[i] > v[next_index]) )
        {
            //ok
        } else {
            return false;
        }
    }
    return true;
}
void print(vector<int> &v) {
    for(auto it: v) cout << it << " ";
    cout << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if(n&1) {
            cout << "NO\n";
            continue;
        }
        if(checker(v,n)) {
            cout << "YES\n";
            print(v);
            continue;
        }
        //now print
        sort(v.begin(),v.end());
        int j = n/2;
        vector<int> ans;
        for(int i = 0; i*2 < n; i++,j++) {
            ans.push_back(v[i]);
            ans.push_back(v[j]);
        }

        if(checker(ans,n)) {
            cout << "YES\n";
            print(ans);
        } else {
            cout << "NO\n";
        }
    }
}

//got a better implementation
