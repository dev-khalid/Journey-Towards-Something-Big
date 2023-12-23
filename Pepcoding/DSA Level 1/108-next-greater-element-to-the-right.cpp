#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        stack<long long> st; 
        vector<long long> result(n); 
        result[n-1] = -1; 
        st.push(arr[n-1]); 
        n = n-1; 
        while(n--) {  
            while(true) { 
                //if the stack is empty then the ans will be -1 
                if(st.empty()) { 
                    st.push(arr[n]);
                    result[n] = -1; 
                    break; 
                }
                if(arr[n]>=st.top()) { 
                    //On smaller elements just remove then ... 
                    st.pop(); 
                } else { 
                    result[n] = st.top(); 
                    st.push(arr[n]); 
                    break; 
                }
            }
        }
        return result; 
    }
};
int main() { 
    int n; 
    cin >> n; 
    vector<long long> v(n); 
    for(auto &it: v) { 
        cin >> it; 
    }
    Solution ob; 
    vector<long long> res = ob.nextLargerElement(v,n); 
    for(long long i : res) { 
        cout << i << " "; 
    }
    cout << endl; 
    return 0; 
}