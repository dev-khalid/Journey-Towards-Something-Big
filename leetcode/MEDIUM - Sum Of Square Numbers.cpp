//source :- https://leetcode.com/problems/sum-of-square-numbers/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Solution {
public:
    bool binary_src(ll s,ll e,ll n) {
        while(s<=e) {
            ll mid = s+ (e-s)/2;
            if(mid*mid==n) return true;
            else if(mid*mid<n)  s = mid+1;
            else e = mid-1;
        }
        return false;
    }
    bool judgeSquareSum(int c) {
        for(ll a=0; a*a<=c; a++) {
            ll b = c - a*a;
            if(binary_src(0,b,b)) {
                return true;
            }
        }
        return false;
    }
};
int main() {
    int c = 40;
    Solution sol;
    if(sol.judgeSquareSum(c)) cout << "found";
}
