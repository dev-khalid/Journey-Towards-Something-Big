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
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        //in case of n<=3 handle it



        //from the beginning to the end
        int s = -1, e=-1;
        for(int i = 0; i < n-1; i++)
        {
            if(v[i]==v[i+1] && s==-1)
            {
                s=i;
            }
            if(v[i]==v[i+1])
            {
                e=i;
            }
        }
        int ans;
        if(s==e)
        {
            //just duplicate segment ektai ache . and seita 2 length er othoba ekdom e nai .
            ans = 0;
        }
        else if(s!=-1 && e!=-1)
        {

            ans = (e-s+2)-3;
            if(ans==0) ans++;
        }
        cout << ans << endl;
    }
}
