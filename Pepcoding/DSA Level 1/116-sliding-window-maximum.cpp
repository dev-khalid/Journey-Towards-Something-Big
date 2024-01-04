#include<bits/stdc++.h>
using namespace std;
// void showdq(deque<int> g)
// {
//     deque<int>::iterator it;
//     for (it = g.begin(); it != g.end(); ++it)
//         cout  << *it << " ";
//     cout << '\n';
// }
int main() { 
    int n , k ; 
    cin >> n >> k; 
    vector<int> v(n); 
    for(auto &it: v) cin >> it;  
    deque<pair<int,int>> dq;//first one is index , second one is value 
    for(int i = 0; i < k; i++) { 
        //push item if it's bigger than previous one and remove previous items . 
        int currentItem = v[i];  
        while(!dq.empty() && dq.back().second <= currentItem) { 
            // cout << "Popping out :" << dq.back() << endl;
            dq.pop_back(); 
        }
        dq.push_back({i,currentItem});  
    }
    // showdq(dq);
    cout << dq.front().second << " "; 
    for(int i = k; i < n; i++) { 
        int currentItem = v[i];  
        if(dq.front().first <= (i-k)) { 
            dq.pop_front(); 
        }
        while(!dq.empty() && dq.back().second <= currentItem) { 
            // cout << "Popping out :" << dq.back() << endl;
            dq.pop_back(); 
        }
        dq.push_back({i,currentItem});
        //front element is always maximum ...  
        cout << dq.front().second << " "; 
    }

}