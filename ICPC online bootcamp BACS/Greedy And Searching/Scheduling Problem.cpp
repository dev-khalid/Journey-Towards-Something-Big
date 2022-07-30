/*Source: https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/tutorial/*/
#include<bits/stdc++.h>
using namespace std;
bool comparator(pair<int,int> a,pair<int,int> b) {
    return a.first > b.first;
}
int main() {
    vector<int> priority = {10,6,4,12},ct = {5,2,1,6};
    vector<pair<int,int>> s;
    int n = priority.size();
    for(int i = 0; i < n; i++) {
        s.push_back({priority[i]/ct[i],i});
    }
    sort(s.begin(),s.end(),comparator);
    int res = 0;
    int time = 0;
    for(int i = 0; i < n; i++) {
        int id = s[i].second;
        time += ct[id];
        res += priority[id]*time;
    }
    cout << res << endl;
}
