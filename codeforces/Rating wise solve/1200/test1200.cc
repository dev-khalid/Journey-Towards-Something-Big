#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &it: v)
        {
            cin >> it;
        }
        sort(v.begin(),v.end());
        //find smallest duplicate pair
        int dif = INT_MAX;
        int d1,d2;
        int p1,p2; //these are the pointers for final ans;
        for(int i = 1; i < n; i++)
        {
            if(v[i]-v[i-1]<dif)
            {
                d2=v[i];
                d1=v[i-1];
                dif=d2-d1;
                p1=i,p2=i-1;
            }

        }
        v[p1] = 0,v[p2] = 0;

        cout << d1 << " ";

        if(n==4)
        {
            int l1=0,l2;
            for(auto it: v)
            {
                if(it && l1)
                {
                    l2 = it;
                }
                else if(it && !l1)
                {
                    l1 = it;
                }
            }
            vector<int> v1 = {d1,l1,l2, d2};
            int hard1 = 0,hard2=0;
            for(int i = 1; i < n; i++)
            {
                if(v1[i]>=v1[i-1])
                {
                    hard1++;
                }
            }
            vector<int> v2 = {d1,l2,l1,d1};
            for(int i = 1; i < n; i++)
            {
                if(v2[i]>=v2[i-1])
                {
                    hard2++;
                }
            }
            if(hard1>hard2)
            {
                cout << l1 << " " << l2 << " " ;
            }
            else
            {
                cout << l2 << " " << l1 << " " ;
            }
        }
        else
        {
            for(auto it: v)
            {
                if(it) cout << it << " ";
            }
        }
        cout << d2 << endl;
    }
}
/**
100
5
5 6 2 1 4

**/
//easy pro
