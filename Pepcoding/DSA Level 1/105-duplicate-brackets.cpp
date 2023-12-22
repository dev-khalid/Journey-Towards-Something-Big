#include<bits/stdc++.h>
using namespace std;

int main() { 
    string s;
    cin >> s; 
    stack<int> st; 
        bool redundant = false; 
        for(auto it: s) { 
        if(it == ')') { 
            redundant = redundant || st.top() == '(';
             while (!st.empty()) {
                if(st.top() == '(') { 
                    st.pop(); 
                    break; 
                }
                st.pop(); 
            }

        } else { 
            st.push(it); 
        }
        }
    cout <<  redundant ? "Yes": "No";
    return 0;
}