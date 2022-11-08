#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k,n,m;
        cin >> k >> n >> m;
        int zeros = 0;
        vector<int> mono(n),poly(m);
        for(int i = 0; i < n; i++)
        {
            cin >> mono[i];
        }
        for(int i = 0; i < m; i++)
        {
            cin >> poly[i];

        }
        vector<int> ans;
        bool doesntExist = false;
        int i = 0, j = 0;
        int lines = k;

        while(i<n && j < m)
        {
            //implementation has some serious issue .


            if(mono[i]<=k)
            {
                ans.push_back(mono[i]);
                if(mono[i]==0 )
                {
                    k++;
                }
                i++;
            }
            if(poly[j]<=k)
            {
                ans.push_back(poly[j]);
                if( poly[j]==0)
                    k++;
                j++;
            }


            if(mono[i]>k && poly[j]>k)
            {
                break;
            }
        }
        while(i<n)
        {
            ans.push_back(mono[i]);
            i++;
        }
        while(j<m)
        {
            ans.push_back(poly[j]);
            j++;
        }

        for(auto it: ans)
        {
            if(it>lines)
            {
                doesntExist = true;
                break;
            }
            if(it==0)
            {
                lines++;
            }
        }
        if(doesntExist)
        {
            cout << -1 << endl;
        }
        else
        {
            for(auto it: ans )
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
}
