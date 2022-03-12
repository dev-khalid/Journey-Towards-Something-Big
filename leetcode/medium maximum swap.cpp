#include<bits/stdc++.h>
using namespace std;

int toNum(char c) {
    return c - 48;
}
/* Non optimal approach
int maximumSwap(int num) {
    if(num<=10) {
        return num;
    }
    string s = to_string(num);
    vector<string> all;
    all.push_back(s); //keep the number itself first
    for(int i = 0; i < s.size(); i++) {
        for(int j = i+1; j < s.size(); j++) {
            string x = s;
            swap(x[i],x[j]);
            all.push_back(x);
        }
    }
    sort(all.begin(),all.end());




    /*
    //now find the maximum out of all of those elements
    int mx = toNum(s[0]);
    int mxPos = 0;
    int n = s.size();
    for(int i = 0; i < n; i++ ) {
        if(mx<toNum(s[i])){
            mxPos = i;
            mx=toNum(s[i]);
        }
    }
    //found the maxpos only now find out the lower index for the new big boy to fit into it
    for(int i = 0; i < mxPos; i++) {
        if(toNum(s[i])<mx) {
            swap(s[i],s[mxPos]);
            break;
        }
    }
    cout << stoi(s) << endl;

    return 0;
    return stoi(all.at(all.size()-1));
}
*/

int maximumSwap(int num) {
    string s = to_string(num);
    //find the mx out of the array
    char mx = s[0];
    int maxPos = 0;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(mx<s[i]) {
            mx = s[i];
            maxPos = i;
        }
    }
    //now check if we need to skip something or not .
    int escap = 0;
    bool changed = false;
    for(int i = 0; i < n; i++) {
        if(mx!=s[i]) {
            escap = i;
            //break it here immediately and go for next max position finding on the arr
            mx='0';//setting this to the lowest number
            for(;i<n; i++) {
                //from here find the maxPos once again
                if(mx<s[i]) {
                    mx = s[i];
                    maxPos = i;
                    changed = true;
                }
            }
            break;
        }
    }
    if(changed)
        swap(s[escap],s[maxPos]);
    else
        swap(s[0],s[maxPos]);
    return stoi(s);
}
int main() {
    int n = 20;
    cout << maximumSwap(n);
}
