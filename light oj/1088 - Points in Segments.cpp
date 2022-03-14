#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    int cse = 1;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        vector<ll> query;
        vector<ll> arr(n);
        vector<pair<ll,int>> queries;
        unordered_map<ll,int> rightDp; //storing how many elements are greater then Qi
        unordered_map<ll,int> leftDp; //storing how many elements are greater then Qi
        unordered_map<ll,int> fr;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < q; i++)
        {
            int qi,qj;
            cin >> qi>> qj;
            queries.push_back({qi,qj});
            query.push_back(qi);
            query.push_back(qj);
        }
        sort(arr.begin(),arr.end());
        sort(query.begin(),query.end());
        //every thing is sorted
        int j = 0,i=0;
        while(j<2*q && i < n)
        {
            if(arr[i]<=query[j])
            {
                rightDp[query[j]] = i;
                i++;
            }
            else
            {
                j++;
            }
        }
        j = 2*q-1,i=n-1;
        while(j>=0 && i>= 0)
        {
             if(arr[i]>=query[j]) {
                leftDp[query[j]] = i;
                i--;
             } else {
                //current element is less then query[j]  move the query to left
                j--;
             }
        }

        cout << "Case " << cse++ << ":\n";
        for(int i = 0; i < q; i++) {
            ll qi = queries[i].first, qj = queries[i].second;
            cout << rightDp[qj] - leftDp[qi] << "\n" ; //this will not be working for an element that does not exist

        }
    }
    return 0;
}


/**
1
5 3
1 4 5 6 8 10
0 5 6 7 10 10000
dp[0] = 6
dp[5] = 4 //including 5 in dp[5]
dp[5] = 3 //excluding 5 from dp[5]

scan and print should be used
secondly ...
there is an edge case i am missing surely .
this program is jora tali dewa .. ..

testcase
1
6 3
1 4 5 6 8 10
0 5
6 10
7 100000



*/
