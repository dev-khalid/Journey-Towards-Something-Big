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
        string a,b;
        bool found = false;
        cin >> a >> b;
        //cnt of each character needs to be equal first
        int ans = n-1;
        for(int i = 0; i < n; i++)
        {
            if(b[i]==a[0])
            {
                //start checking from this point
                int j = 0;
                while(b[(i+j)%n] == a[j] && j<n) j++;
                if(j==n)
                {
                    found = true;
                    ans = min(n-i,i);
                }
            }
        }
        cout << (found ? ans : -1) << endl;
    }
}
