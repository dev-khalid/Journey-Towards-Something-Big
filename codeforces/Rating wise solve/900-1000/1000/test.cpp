#include<bits/stdc++.h>
using namespace std;
int dist(pair<int,int> &a,pair<int,int> &b) {
    return abs(a.first-b.first) + abs(a.second-b.second);
}
int main() {
    int t1 = 0, t2 = 4;
    vector<int> v = {10,20,30};
    cout << lower_bound(v.begin(),v.end(),0) - v.begin() << endl;
    cout << upper_bound(v.begin(),v.end(),15) - v.begin() << endl;
}
