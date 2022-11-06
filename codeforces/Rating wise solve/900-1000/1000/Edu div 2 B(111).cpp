#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int zeros = 0, ones = 0;
        vector<int> seg = {0,0};
        int i = 0;
        seg[s[0]-'0']++;
        for(int i = 1; i < n; i++)
        {
            if(s[i]!=s[i-1])
            {
                seg[s[i]-'0']++;
            }
        }
        int ans = a*n;

        int total_segments = seg[0]+seg[1];

        int bs = total_segments*b;
        bs = max(bs,(1+seg[1])*b);
        bs = max(bs,(1+seg[0])*b);
        bs = max(bs,n*b);
        if(!seg[0] || !seg[1]) {
            bs = b;
            bs = max(bs,b*n);
        }
        ans+=bs;
        cout << ans << endl;
    }
}
