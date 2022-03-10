#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
    int n = height.size();
    vector<int> left(n);
    vector<int> right(n);
    left[0] = height[0];
    right[n-1] = height[n-1];

    for(int i = 1; i < n; i++) {
        left[i] = max(height[i],left[i-1]);
        right[n-i-1] = max(right[n-i],height[n-i-1]);
    }
    int result = 0;
    for(int i = 0; i < n; i++) {
        result += min(left[i],right[i]) - height[i];
    }
    return result;
}
int main() {
    vector<int> x{0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(x) << endl;
    return 0;
}
