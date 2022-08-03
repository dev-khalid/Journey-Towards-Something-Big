//source:- https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lenOfLongSubarr(int a[],  int n, int k)
    {
        int sum = 0;
        unordered_map<int,int> mp;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            sum+=a[i];
            if(mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }

            if(sum==k)
            {
                ans = max(ans,i+1);
                //cout << "Found at: " << i << endl;
            }
            else if(mp.find(sum-k)!=mp.end())
            {
                ans = max(ans,i-mp[sum-k]);
                //cout << "occurred from - to:  " << i << " " << mp[sum-k] << endl;
            }
            //if on the current position we can find something thats sum-k then store the ans
        }
        return ans;
    }

};
int main()
{
    while(1)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution Sol;

        cout << Sol.lenOfLongSubarr(a,n,k) << endl;
    }

}
/*
17 15
-13 0 6 15 16 2 15 -12 17 -16 0 -3 19 -3 2 -9 -6
17 6
-13 0 6 15 16 2 15 -12 17 -16 0 -3 19 -3 2 -9 -6
6 16
1 4 3 3 5 5
5 -3
0 0 -1 1 -3
5 -3
-1 0 2 -5 -3
6 15
10 5 2 7 1 9
3 6
-1 2 3

*/
