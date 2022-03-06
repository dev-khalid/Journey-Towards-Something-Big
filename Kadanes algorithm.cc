#include<bits/stdc++.h>
using namespace std;
int kadanes_algorithm(int *a,int n) {
    int max_sum = a[0];//this will help to find max sum in an array where all elements are negative
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum+=a[i];

        max_sum = max(max_sum,sum);
    }
    return max_sum;
}
int main() {
    int a[] = {-1,-2,-3};

    cout << kadanes_algorithm(a,3);
}
//need to implement 2d kadane
//need to implement 2d prefix sum also .
//problem on leetcode
