#include<bits/stdc++.h>
using namespace std;
bool powerOfTwo(int x) {
    for(int i = 0; i <= 30; i++) {
        if((1<<i) == x) {
            return true;
        }
    }
    return false;
}
bool powerOfTwoMinusOne(int x) {
    for(int i = 0; i <= 30; i++) {
        if((1<<i)-1 == x) {
            return true;
        }
    }
    return false;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        if(x==1) {
            cout << 3 << endl;
            continue;
        }
        if(powerOfTwo(x)){
            cout << x+1 << endl;
            continue;
        }
        if(powerOfTwoMinusOne(x)) {
            cout << 1 << endl;
            continue;
        }
        //check for first on bit and return ans
        int y;
        for(int i = 0; i <= 30; i++) {
            if(x&(1<<i)){
                y = (1<<i);
                break;
            }
        }
        cout << y << endl;


    }
}
