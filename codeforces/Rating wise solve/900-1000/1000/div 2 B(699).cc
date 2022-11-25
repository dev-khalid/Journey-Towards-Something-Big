#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if(n==1) {
            cout << -1 << endl;
            continue;
        }
        int lastPosition = 0;
        //check if any of the element can pass all ?
        while(k--) {
            //check if it can pass the next one
            for(int j = 0; j < n-1; j++) {
                //cout << "i i+1 -> " << v[j] << " " << v[j+1] << endl;
                if(v[j]>=v[j+1]) {
                    //nothing to do with that boulder
                    lastPosition = j+2;
                } else {
                    lastPosition = j+1;
                    v[j]++;
                    break;
                }
                //cout << "Last Position of boulder " << lastPosition << endl;
            }
            if(lastPosition==n) {
                lastPosition = -1;
                break;
            }
        }
        if(lastPosition==0) {
            //lastPosition++;
        }
        cout << lastPosition << endl;
    }
}

