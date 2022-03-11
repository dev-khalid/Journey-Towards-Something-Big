#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr{1,2,3,4,5,8,6,7,9,10};
    //find the problem first .
    //then find right place for both of the problematic element.
    pair<int,int> ans{-1,-1};
    int n = arr.size();
    int pos=-1;
    for(int i = 0; i < n-1; i++) {
        if(arr[i]>arr[i+1]) {
            pos=i;
            break;
        }
    }

    if(pos!=-1) {
        int left,right;
        for(int i = pos; i < n; i++) {
            if(i==n-1) {
                //reached the final position where the element is bigger then any other
                //element of the arr
                right = n-1;

            }
            else if(arr[pos]<=arr[i+1]) {
                right = i;
                break;
            }
        }
        //find right position for smaller element
        for(int i = pos+1; i >=0; i--) {
            if(i==0) {
                left = 0;
            }
            else if(arr[pos+1]>=arr[i-1]) {
                left = i;
                break;
            }
        }
        ans.first = left;
        ans.second = right;
    }
    cout << ans.first << " " << ans.second << endl;
    return 0;
}
