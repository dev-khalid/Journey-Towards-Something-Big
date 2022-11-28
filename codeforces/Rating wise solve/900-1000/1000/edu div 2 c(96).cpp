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
        if(n<=2)
        {
            if(n==2)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
            for(int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << 2 << endl;
            int last = n;
            for(int i = n-1; i >= 1; i--) {
                cout << i << " " << last << endl;
                last = (i+last+1)/2;
            }


        }
    }
}
