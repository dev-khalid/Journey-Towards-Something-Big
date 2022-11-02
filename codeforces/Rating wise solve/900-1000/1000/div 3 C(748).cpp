#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        vector<int> v(k);
        for(int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        //count the difference and store it in the prefix array ?
        ll cats_step_size = 0;
        ll cnt = 0;
        for(int i = k-1; i>=0; i--)
        {
            if( cats_step_size < v[i] )
            {
                cnt++;
            } else {
                break;
            }
            cats_step_size += (n-v[i]);
        }
        cout << cnt << endl;
    }
}
