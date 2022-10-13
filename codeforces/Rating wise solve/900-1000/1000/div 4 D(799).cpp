#include<bits/stdc++.h>
using namespace std;

bool palindrome(int minute) {
    int h = minute/60;
    minute%=60;
    //check if the number h is reverse of minute or not
    return (h/10==minute%10 && h%10==minute/10);
}
int minute(int h,int m) {
    return h*60+m;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int x;
        cin >> x;
        int h = stoi(s.substr(0,2));
        int m = stoi(s.substr(3));
        int cnt = 0;
        unordered_map<int,int> mp;
        int mn = minute(h,m);
        for(int i = 0; i <= 1440; i++) {
            mn%=1440;
            if(mp.find(mn)==mp.end()) {
                //it was not counted first
                cnt+=palindrome(mn);
                mp[mn] = 1;
            }
            mn+=x;
        }
        cout << cnt << endl;

    }
}
