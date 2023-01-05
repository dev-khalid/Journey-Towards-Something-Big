#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;
const ll MOD=1e9+7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;

        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int vejal = 0;
        int start = 1;
        for(int i = 0; i < n; i++) {
            if(v[i]!=start) {
                vejal++;
            } else {
                start++;
            }
        }
        if(vejal==0) {
            cout << 0 << endl;
            continue;
        }
        cout << (vejal-1)/k + 1 << endl;

    }
}

