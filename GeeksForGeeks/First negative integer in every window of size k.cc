//source :- https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<long long> printFirstNegativeInteger(long long int a[],
        long long int n, long long int k)
{
    vector<ll> ans;

    if(!n) return ans;

    queue<ll> q;
    for(int i = 0; i < n; i++)
    {
        if(a[i]<0)
        {
            q.push(i);
        }
    }
    for(int i = 0; i < n-k+1; i++)
    {

        while(!q.empty())
        {
            if(q.front()>=i && q.front()<i+k)
            {
                ans.push_back(a[q.front()]);
                break;
            }
            else if(q.front()<i) q.pop();
            else if(q.front()>=i+k)
            {
                ans.push_back(0);
                break;
            }
        }
        if(q.size()==0)
        {
            ans.push_back(0);
        }
    }
    return ans;
}
int main()
{
    ll  a[] = {12, -1, -7, 8, -15, 30, 16, 28};
    ll n, k=3;
    n = sizeof(a) / sizeof(a[0]);

    vector<ll> ans = printFirstNegativeInteger(a,n,k);
    for(auto it: ans)
    {
        cout << it << " ";
    }

}
