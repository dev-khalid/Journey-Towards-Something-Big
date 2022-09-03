
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
        vector<int> nums(n);
        for(int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        sort(nums.begin(),nums.end());
        if(n==1)
        {
            if(nums[0]>1)
                cout << "NO\n";
            else
            {
                cout << "YES\n";
            }
            continue;
        }

        if(nums[n-1] - 1 > nums[n-2])
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
}
