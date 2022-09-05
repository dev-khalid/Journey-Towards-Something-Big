#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> a(n); //chairs needed for a persons hoga
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        if(n==1)
        {
            if(m>=(a[0]*2+1))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if(n<m)
        {
            bool possible = true;
            ll pos = a[0];//first persons position
            for(int i = 1; i < n; i++)
            {
                pos += (1 + max(a[i-1],a[i]));//this is the current position for i'th element
                if(pos>=m)
                {
                    possible = false;
                    break;
                }
                //for the last position i need to check if it has enough space to breadth
                if(i==(n-1))
                {
                    int space = (m-1-pos+a[0]);
                    if(space<a[i])
                    {
                        possible = false;
                    }
                }
            }
            cout << (possible? "YES\n" : "NO\n");
        }
        else
        {
            cout << "NO\n";
        }


    }
}









