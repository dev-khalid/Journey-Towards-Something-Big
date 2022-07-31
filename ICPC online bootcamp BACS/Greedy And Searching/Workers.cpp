//Source :- https://www.topcoder.com/thrive/articles/Binary%20Search
#include<bits/stdc++.h>
using namespace std;
int getMostWork(vector<int> payload,int workers) {
    int n = payload.size();
    sort(payload.begin(),payload.end());
    int lo = payload[n-1];
    int hi = 0;
    for(auto el: payload) hi+=el;
    int x;
    while(lo<hi) {
        x = lo+(hi-lo)/2;

        //now need to check if it fits
        int req = 1,current_load = 0;
        for(int i = 0; i < n; i++) {
            if(current_load+payload[i]<=x) {
                current_load+=payload[i];
            }else {
                req ++;
                current_load = payload[i];
            }
        }
        if(req <= workers) {
            hi = x;
        } else {
            lo = x+1;
        }
    }
    return lo;
}
int main() {
    vector<int> payload = {1,2,3,4,5,6,7,8,9};
    int workers = 3;
    cout << getMostWork(payload,workers);
    return 0;
}
