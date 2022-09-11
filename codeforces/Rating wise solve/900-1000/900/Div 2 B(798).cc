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
        vector<bool> used(n+1,false);
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if(n==1)
        {
            cout << -1 << endl;
            continue;
        }
        for(int i = 0; i < n; i++)
        {
            //there are two requirements
            //1.the element we are trying to push in ans can't be same as v[i-1]
            //2.the element should not be used already
            int el = v[i];
            for(int j = 1; j <= n; j++)
            {
                if(j!=el && !used[j])
                {
                    used[j] = true;
                    ans.push_back(j);
                    break;
                }
            }
        }
        if(v[n-1]==n && ans.size() < n)
        {
            ans.push_back(n);
            swap(ans[n-1],ans[n-2]);
        }
        for(auto it: ans )
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
