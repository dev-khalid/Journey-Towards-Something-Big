//source:- https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int l = 0,h = n-1,m;
        while(l<h) {
            m = l + (h-l)/2;
            if(m!=0 && m!=n-1 && arr[m]>=arr[m-1] && arr[m]>=arr[m+1]){
               return m;
            } else if(m!=0 && arr[m]>arr[m-1]) {
                l = m+1;
            } else {
                h = m;
            }
        }
        return m;
    }
};
int main() {
    Solution sol;

}
