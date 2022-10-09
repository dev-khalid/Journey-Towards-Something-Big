//problem link: https://open.kattis.com/problems/cups?fbclid=IwAR3I1VX1-5Wa4HrMJ_aPO4JEfnstkm0mLj-lLAnXOmzkVA0p0htVGCUjB-4

#include<bits/stdc++.h>
using namespace std;
bool comparator(pair<int,string> &a,pair<int,string> &b) {
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int,string>> v(n);
    string s1,s2;
    for(int i = 0; i < n; i++) {
        cin >> s1 >> s2;
        if(s1[0]>='0' && s1[0]<='9') {
            //this is the number
            int n = stoi(s1);
            n  >>= 1;

            v.push_back({n,s2});
        } else {
            int n = stoi(s2);
            v.push_back({n,s1});
        }
    }
    sort(v.begin(),v.end());
    for(auto it: v) {
        cout << it.second << endl;
    }
}
