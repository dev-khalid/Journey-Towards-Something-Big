#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> p;
int dist(pair<int,int> a,pair<int,int> b) {
    int x1 = a.first, y1=a.second, x2=b.first, y2=b.second;
    return sqrt(pow((x1-x2),2) + pow((y1-y2),2));
}
bool sq(int a,int b,int c,pair<int,int> xy) {
    return dist(p[a],p[b]) == dist(p[a],p[c]) == dist(p[b],xy) == dist(xy,p[c]);
}
bool checker(int i,int j,int k,pair<int,int> xy) {
    //here we will get 4 more combination?
    return sq(i,j,k,xy) || sq(j,k,i,xy) || sq(k,i,j,xy);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int x,y;
        cin >> x >> y;
        if(s=="add") {
            p.push_back({x,y});
        }
        else {
            //now need to do a loop to find this out
            int n = p.size();
            int cnt = 0;
            for(int i = 0; i < n-2; i++)  {
                for(int j = i+1; j < n-1; j++) {
                    for(int k = j+1; k < n; k++) {
                        if(checker(i,j,k,make_pair(x,y))){
                            cnt++;
                        }
                    }
                }
            }
            cout << cnt << endl;
        }
    }
}
