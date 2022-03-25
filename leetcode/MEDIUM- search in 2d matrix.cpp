#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n = matrix[0].size();
        for(int i = 0; i < m;i++) {
            if(binary_search(matrix[i].begin(),matrix[i].end(),target)) return true;
        }
        return false;
    }

};
/*
following solution is pretty much intuitive

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n = matrix[0].size();
        int start = 0, end = m*n-1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            int element = matrix[mid/n][mid%n];
            if(element==target)return true;
            else if(element<target) {
                start = mid+1;
            } else {
                end = mid-1;
            }
        }
        return false;
    }
};
*/
//this is a prettry much good problem to solve in o(logn);
int main() {
    vector<vector<int>> x{{1,3,5,7},{10,11,16,20},{21,30,34,60}};
    Solution sol;
    int target = 3;
    if(sol.searchMatrix(x,target)) {
        cout << "found";
    }
}
