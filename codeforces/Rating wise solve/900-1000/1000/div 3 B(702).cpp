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
        int x;
        vector<int> v(3,0);
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            v[(x%3)]++;
        }
        int limit = n/3;
        int cost = 0;

        for(int i = 0; i < 3; i++)
        {
            if(v[i]<limit) {
                //gap ache
                int gap = limit - v[i];
                int next = (i+1)%3,next2 = (i+2)%3;
                //cout << "current index : " << i << "\nHas gap of : " << gap << endl;
                //jotota para jay porer ta theke new dorkar
                if(v[next]>limit) {
                    int take = min(gap,v[next]-limit);
                    gap-=take;
                    cost+=(take*2);
                    v[i] += take;
                }
                //cout << "Tried picking from next element and now gap is : " << gap << endl;
                //cout << "current element is : " << v[i] << endl;

                if(gap && v[next2]>limit) {
                    int take = min(gap,v[next2]-limit);
                    gap-=take;
                    cost+=take;
                    v[i]+=take;
                }
            }
        }

        cout << cost << endl;


    }
}
