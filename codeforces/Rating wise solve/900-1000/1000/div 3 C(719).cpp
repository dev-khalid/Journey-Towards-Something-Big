#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n;
        cin >> n;
        int x = 1;
        if(n==2)
        {
            cout << -1 << endl;
            continue;
        }
        int y = n*n;
        int cnt = 1;
        for(int i = 1; i <= y; i+=2,cnt++) {
            cout << i << " ";
            if(cnt%n==0) cout << "\n";
        }
        for(int i = 2; i <= y; i+=2,cnt++) {
            cout << i << " ";
            if(cnt%n==0) cout << "\n";

        }


    }
}
