#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int o1=0,o2=0,e1=0,e2=0;
        char c;
        for(int i = 0; i < n; i++) {
            cin >> c;
            if(c=='1') {
                if((i+1)&1) {
                    o2++;
                } else {
                    e1++;
                }
            } else {
                if((i+1)&1) {
                    o1++;
                } else {
                    e2++;
                }
            }
        }
        int ans = 0;
        ans = min(o1,e1);
        int toAdd = min(o2,e2);
        ans+=toAdd;
        /*
        0 0 0 1 1
        1 0 0 0 0
        Result
        010000101
        e2 = 3 o2 = 2 & leftZeros = n/2-e2;

        0 0 0 1 1
        1 1 1 1 1
        e2 = 0

        */
        if(toAdd>0 && e2==o2 && n%2==0) {
            ans--;
        }
        cout << ans << endl;
    }
}
/*
Input

11

1
1

2
10

2
01

3
110

3
011

3
101

3
111
3
000

3
001

10
0100001011

8
01111010
Output

*/
