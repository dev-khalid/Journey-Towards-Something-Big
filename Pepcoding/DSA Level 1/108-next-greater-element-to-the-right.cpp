#include<bits/stdc++.h>
using namespace std;
/**
    Practice link: https://practice.geeksforgeeks.org/problems/next-greater-element/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
    Practice link: https://leetcode.com/problems/next-greater-element-ii/
*/
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
            //Code refactoring... 
            // while(true) { 
            //     //if the stack is empty then the ans will be -1 
            //     if(st.empty()) { 
            //         st.push(arr[n]);
            //         result[n] = -1; 
            //         break; 
            //     }
            //     if(arr[n]>=st.top()) { 
            //         //On smaller elements just remove then ... 
            //         st.pop(); 
            //     } else { 
            //         result[n] = st.top(); 
            //         st.push(arr[n]); 
            //         break; 
            //     }
            // }

            while(!st.empty() && arr[n] >= st.top()) { 
                st.pop(); 
            }
            if(st.empty()) { 
                result[n] = -1; 
            } 
            else { 
                result[n] = st.top(); 
            }
            st.push(arr[n]); 
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