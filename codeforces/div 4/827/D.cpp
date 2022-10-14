#include<bits/stdc++.h>
using namespace std;
unordered_map<int,vector<int>> coprimes;
void precalc() {
    for(int i = 1; i <= 1000; i++) {
        for(int j  = 1; j <= 1000; j ++) {
            if(__gcd(i,j)==1) {
                coprimes[i].push_back(j);
            }
        }
    }
}
int main()
{
    precalc();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n+1);
        vector<int> has(1001,0);
        for(int i = 1; i <= n; i++)
        {
            cin >> v[i];
            has[v[i]] = i;
        }
        int ans = -1;
        for(int i = 1; i <= n; i++)
        {
            vector<int> coprime = coprimes[v[i]];
            //now iterate through each element on array and find if it's there
            for(auto it: coprime) {
                if(has[it]) {
                    ans = max(ans,i+has[it]);
                }
            }

        }
        cout << ans << endl;

    }
}

