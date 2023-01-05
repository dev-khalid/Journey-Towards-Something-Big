class Solution {
public:

    int findMinArrowShots(vector<vector<int>>& points) {
        vector<pair<int,int>> v;
        for(auto it: points) {
            v.push_back({it[0],it[1]});
        }
        sort(v.begin(),v.end(),[](pair<int,int> &a,pair<int,int> &b)  {
            return a.first < b.first;
        });
        int mx = v[0].first,mn = v[0].second;
        int ans = 1;
        int s,e;
        for(auto it: v) {
            s = it.first , e = it.second;
            if(s<=mn) {
                //ok
                mx = max(s,mx);
                mn = min(e,mn);
            } else {
                ans++;
                mx = s, mn = e;
            }
        }
        return ans;
    }
};
