#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        if(a==b)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }
        ll interest = abs(a-b);
        //moves should be minimum of
        ll mx = max(a,b);

        cout << interest << " " << min(mx%interest,interest-mx%interest) << endl;
    }
}
