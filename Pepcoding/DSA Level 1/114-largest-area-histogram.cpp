#include<bits/stdc++.h>
using namespace std;
void printQ(deque<pair<int,int>> t) { 
    deque<pair<int,int>> q = t;
    cout << "Printing Queue: " << q.size() << endl;
    while(!q.empty()) {
        cout << " { " << q.front().first << " , " << q.front().second << " } ";
        q.pop_front();
    }
    cout << endl; 
}
int main() {
    int n; 
    cin >> n; 
    vector<int> v(n); 
    for(auto &it: v) cin >> it;
    deque<pair<int,int>> q; //key: index, value: starting span index
    q.push_front({0,0}); 
    // printQ(q);
    int mx = v[0];
    for(int i = 1; i < n; i++) { 
        int current = v[i]; 
        int sz = q.size();
        int span = i;
        // cout << "Current : " << current << endl;
        while(!q.empty()) { 
            int top = v[q.front().first];
            // cout << "Top: " << top  << endl; 
            if(top >= current) { 
                //remove from queue 
                span = min(span,q.front().second);
                q.pop_front();
            } else { 

                int topsSpan = q.front().second; 
                
                mx = max(top*(i-topsSpan+1),mx);
                break;
            }
        }

        //finally push the element 
        q.push_front({i,span});
        mx = max(mx,v[i]*(i-span+1)); 
        while(!q.empty()) {
            mx = max(mx, v[q.front().first]*(n-q.front().second));
            q.pop_front();
        }
        
    }
    cout << mx << endl; 
}