#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    stack<char> st;
    for(int i =0; i < s.size(); i++)
    {
        char c = s[i];
        if(c=='(' || c=='{' || c=='[')
        {
            st.push(c);
        } else {
            if(!st.empty()) {
                char top = st.top();
                st.pop();
                if(c==')' && top=='(')
                {
                 continue;
                } else if(c=='}'&& top=='{') {
                    continue;
                } else if(c==']' && top=='[') {
                    continue;
                } else {
                    cout << "No" << endl;
                    return 0;
                }
            } else {
                cout << "No" << endl;
                return 0;
            }
        }

    }
    if(st.empty())
    cout << "Yes" << endl;
    else {
        cout << "No" << endl;
    }
    return 0;
}
