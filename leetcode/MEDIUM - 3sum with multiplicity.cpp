#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    ll mod = 1e9+7;


    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,int> mp; //this will store the count only
        unordered_map<int,int> id; //elements index;
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
            if(id.find(arr[i]) == id.end()) {
                id[arr[i]] = i;
            }
        }
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                int x = arr[i],y = arr[j] , z = target-arr[i]-arr[j];
                if(mp[z] && id[z]>j) {
                    cnt = (cnt % mod + mp[z] % mod ) %mod;
                }
                else if(mp[z]>1 && id[z]==j) {
                    //j er por next koyta element same ache eita check dilei hobe
                    int c = 1,same = 0;
                    while(arr[j]==arr[j+c]) same ++,c++;
                    cnt = (cnt % mod + same % mod ) %mod;
                }
            }
        }
        return cnt;
    }
};
int main() {

    vector<int> arr{1,1,2,2,3,3,3,3,3,3,3,4,4,5,5};
    int target = 8;
    Solution sol;
    cout << sol.threeSumMulti(arr,target);
}
