
class Solution {
public:
    int maxArea(vector<int>& height) {
        pair<int,int> l={0,0};
        int n = height.size();
        int mx = 0;
        vector<pair<int,int>> mxs;
        for(int i = 0; i < n ; i++ ) {
            for(auto el: mxs) {
                mx = max(mx,min(height[i],el.first)*(i-el.second));
            }
            if(l.first<height[i]) {
                l.first = height[i];
                l.second = i;
                mxs.push_back(l);
            }
        }
        return mx;
    }
};

