#include<bits/stdc++.h>
using namespace std;

int toNum(char c) {
    return c - 48;
}

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
    */
    return stoi(all.at(all.size()-1));
}
int main() {
    int n = 2000;
    cout << maximumSwap(n);
}
