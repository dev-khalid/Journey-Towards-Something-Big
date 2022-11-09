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
        vector<pair<int,int>> ans;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i]<=0)
                ans.push_back({v[i],i});
        }
        if(n==1)
        {
            cout << 1 << endl;
            continue;
        }



        //now find their minimum difference
        int diff = INT_MAX;
        if(ans.size()==1)
        {


            //check if there is 2 same element exist before and after the array

            int boundary = ans[0].second;

            //try finding min before boundary and after boundary

            if(boundary==0 || boundary==n-1)
            {
                cout << 2 << endl;
            }
            else
            {
                //left and right half exists
                int left = v[0];
                int right = v[n-1];
                int i = 0;
                while(i<boundary)
                {
                    left = min(v[i++],left);
                }
                i = n-1;
                while(i>boundary)
                {
                    right = min(v[i--],right);
                }
                diff = min(diff,abs(left-ans[0].first));
                diff = min(diff,abs(right-ans[0].first));
                if(left<=diff && right <=diff)
                {
                    cout << 3 << endl;
                }
                else
                {
                    cout << 2 << endl;
                }
            }
        }
        else if(ans.size()==0)
        {
            cout << 1 << endl;
        }
        else
        {
            int k = ans.size();
            for(int i = 1; i < k; i++)
            {
                diff = min(diff,abs(ans[i].first-ans[i-1].first));

            }
            //cout << "Minimum Difference : " << diff << endl;
            int cnt = 0;
            int left = -1, right;
            for(int j = 0; j < ans.size(); j++)
            {
                //cout << "Going from " << left+1 << " to " << ans[j].second << endl;
                for(int i = left+1; i < ans[j].second ; i++)
                {
                    if(v[i]<=diff)
                    {

                        cnt++;
                        break;
                    }
                }
                left = ans[j].second;
                if(j==ans.size()-1)
                {
                    for(int i = left+1;   i < n ; i++)
                    {
                        if(v[i]<=diff)
                        {
                            cnt++;
                            break;
                        }
                    }
                }
            }
            cout << cnt+ans.size() << endl;

        }
    }
}
//eto baje style er code ekta manush kemne kore ?
//try balancing development and competitive programming .
//competitive programming needs a pure 6 hours of hard work each and every day.
