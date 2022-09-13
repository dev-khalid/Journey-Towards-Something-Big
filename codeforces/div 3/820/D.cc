#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> cost(n),budget(n);
        for(int i = 0; i < n; i++)
        {
            cin >> cost[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> budget[i];
        }
        int neutral_count = 0;
        vector<int> bad,good;
        for(int i = 0; i < n; i++)
        {
            if(cost[i]==budget[i])
            {
                neutral_count++;
            }
            else if(cost[i]<budget[i])
            {
                good.push_back(budget[i]-cost[i]);
            }
            else
            {
                bad.push_back(cost[i]-budget[i]);
            }
        }
        int bs = bad.size(),gs = good.size(); //bad array size bs,good array size gs
        int ans = INT_MIN;
        if(bs&&gs)
        {
            sort(bad.begin(),bad.end());
            sort(good.begin(),good.end());
            int groups = 0;
            int g = 0;
            int good_used = 0;
            for(int i = 0; i < bad.size() && g<gs; i++)
            {
                if(bad[i]<=good[g])
                {
                    groups++;
                    g++;
                    good_used++;
                } else {
                    while(g < gs && bad[i]>good[g]) {
                        g++;
                    }
                    if(g<gs) {
                        good_used++;
                        groups++;
                        g++;
                    }
                }

            }
            groups += (gs-good_used+neutral_count)/2;
            ans = max(ans,groups);
        }
        ans = max(ans,(gs+neutral_count)/2);

        cout << ans << endl;
    }

}
/*
18
20 22 23 24 1 1 1 20 20 20 20 20 20 20 20 30 40 100
10 10 10 10 1 1 1 21 22 23 24 24 24 24 25 38 57 101
6
7 5 6 2 7 2
3 3 6 3 2 5
ans 2
ans 5
*/
