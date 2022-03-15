#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[100005];
int main()
{
    int t;
    cin >> t;
    int cse = 1;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        vector<pair<ll,ll>> queries;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        printf("Case %d:\n",cse);
        for(int i = 0; i < q; i++)
        {
            ll qi,qj;
            cin >> qi>> qj;
            cout << (upper_bound(arr,arr+n,qj)-arr)-(lower_bound(arr,arr+n,qi)-arr) << "\n";
        }
    }


return 0;
}


/**
1
9 5
1 4 5 5 6 6 6 8 10
0 5
6 10
7 100000
1000 1000
0 0
*/
