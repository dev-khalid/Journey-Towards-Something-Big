#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;
vector<ll> p2;
void preCalc() {
    ll total = 1LL;
    p2.push_back(total);
    for(ll i = 1; i <= 50; i++) {
        total*=2LL;
        p2.push_back(total);
    }

}
int main()
{
    preCalc();
    int t;
    cin >> t;
    while(t--)
    {
        ll h,p;
        cin >> h >> p;
        ll total = 0LL;
        ll time = 0LL;
        ll task = 1LL;
        bool hasGreater = false;
        for(ll i = 0; i < h; i++)
        {
            task = p2[i];
            if(task>=p)
            {
                hasGreater = true;
                total += task;
                continue;
            }
            time++;
        }
        if(hasGreater)
            time+=(total-1LL)/p+1LL;
        cout << time << endl;
    }
}

