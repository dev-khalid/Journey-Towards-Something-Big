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
        int k;
        cin >> k;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end(),[](pair<int,int> &a,pair<int,int> &b)
        {
            return a.first < b.first;
        });


        if(n==1 || k==n )
        {
            cout << "YES\n";
            continue;
        }
        int segment_count = 0;
        int i = 0;
        while(i<n)
        {
            if(i==n-1) {
                if(v[i-1].second+1!=v[i].second) {
                    segment_count++;
                    break;
                }
            }

            while(i<n-1 && v[i].second+1 == v[i+1].second)
            {

                if(i==n-2)
                {
                    if(v[n-2].second+1==v[n-1].second)
                    {
                        //nothing to do
                    }
                    else
                    {
                        segment_count++;
                    }
                }
                i++;
            }
            segment_count++;
            i++;
        }
        //now what for the last element

        if(segment_count <= k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

}

/*
found a very good way of implementation
    */
