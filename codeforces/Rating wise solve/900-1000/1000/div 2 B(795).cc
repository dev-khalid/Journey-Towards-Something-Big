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
        vector<int> s(n+1);

        for(int i = 1; i<= n; i++)
        {
            cin >> s[i];
        }
        //count the segment and move store store them in mp[i] = {starting,segment size}
        int i = 1;
        vector<int> ans;
        bool found = true;
        while(i<=n)
        {
            //now let's say the current element is s[i] count them
            int current_element = s[i];
            int cnt = 1;
            while(i + cnt <= n && s[i+cnt]==current_element)
            {
                ans.push_back(i+cnt);
                cnt++;

            }

            if(cnt>1)
            {
                ans.push_back(i);
                i+=cnt;
                //cout << "i and cnt " << i << " " << cnt << endl;
                //ok
            }
            else
            {
                found = false;
                break;
            }
        }

        if(!found)
        {
            cout << -1 << endl;
        }
        else
        {
            for(auto it: ans)
            {
                cout << it << " ";
            }
            cout <<"\n";

        }
    }
}
