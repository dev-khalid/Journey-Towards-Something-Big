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
        vector<int> v(n);
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(mp.find(v[i])==mp.end())
            {
                mp[v[i]] = i;
            }
        }
        int cnt = mp.size(); // this is the number of unique number
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        int i = n-2;
        if(v[i]<=v[i+1])
        {
            while(v[i]<=v[i+1] && i >= 0)
            {
                bool changed = false;
                while(v[i+1]==v[i] && i>= 0) changed = true, i--;
                //last segment er element er first index ki i+1 er soman kina .. soman hoile safe
                if(mp[v[i+1]] != -1 )
                {
                    //stops counting twice
                    if(mp[v[i+1]]==i+1)
                    {
                        //safe
                        cnt--;
                        mp[v[i+1]] = -1; //so that this is not counted double
                    }
                    else

                        break;

                }
                if(!changed)
                {
                    i--;
                    //after reducing the value just check if this is going to be the last iteration or not
                    if(v[i]>v[i+1])
                    {
                        if(mp[v[i+1]]==i+1)
                        {
                            //safe
                            cnt--;
                            mp[v[i+1]] = -1; //so that this is not counted double
                        }
                    }
                }
                if(i<0 && v[0] < v[1])
                {
                    cnt  = 0;
                }
            }
            cout << cnt << endl;
        }
        else
        {
            if(mp[v[n-1]]==n-1)
            {
                cout << cnt-1 << endl;
            }
            else
            {
                cout << cnt << endl;
            }
        }
    }
}
