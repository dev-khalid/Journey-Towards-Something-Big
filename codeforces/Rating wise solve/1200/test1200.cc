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
        vector<char> v(n+1);
        ll cnt = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if(v[i]=='0') cnt++;
        }
        ll ans = 0;
        int i = 1;
        for(; i <= n && cnt; i++)
        {
            if(v[i]=='2')
            {
                //cout << "Starting from: " << i << " value: " << v[i] << endl;
                //start a loop from here
                int j = i+i;
                while(j<=n && v[j]=='0')
                {
                    //cout << "v["<<j<<"]="<<v[j] << " , ";
                    v[j]='2';
                    j+=i;
                    cnt--;
                    ans+=i;
                }
                //cout << endl;

                //cout << "Ans in this segment : " << ans << "\nCount of zero in this segment: "<< cnt << endl;
            }
            if(v[i]=='0')
            {
                int j = i;

                //cout << "Starting from: " << i << " value: " << v[i] << endl;
                while(j<=n && v[j]=='0')
                {

                    //cout << "v["<<j<<"]="<<v[j] << " , ";
                    ans+=i;
                    v[j]='2';
                    j+=i;
                    cnt--;
                }
                //cout << endl;
                //cout << "Ans in this segment : " << ans << "\nCount of zero in this segment: "<< cnt << endl;
            }

        }
        cout << ans << endl;
    }
}

/*
100
10
1000010000
10
0000010001
*/
