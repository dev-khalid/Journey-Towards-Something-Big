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
        map<char,int> m1,m2;
        for(int i = 0; i < n; i++)
        {
            m1[a[i]]++;
            m2[b[i]]++;
        }
        bool dont_continue = false;
        for(int i = 0; i < 26; i++)
        {
            char c = 'a'+i;
            if(m1[c]!=m2[c])
            {
                dont_continue = true;
                break;
            }
        }
        int ans = INT_MAX;

        if(!dont_continue)
        {

            for(int i = 0; i < n; i++)
            {
                if(b[i]==a[0])
                {
                    //cout << "Starting at : " << i << endl;
                    //start checking from this point
                    int j = 0;
                    while(b[(i+j)%n] == a[j] && j<n)
                    {
                        //cout << (i+j)%n << " " <<  j << endl;
                        j++;
                    }

                    if(j==n)
                    {
                        found = true;
                        ans = min(n-i,i);
                    }
                }
            }
        }
        cout << (found ? ans : -1) << endl;
    }
}
