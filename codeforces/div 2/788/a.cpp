#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        vector<int> a(n);
        int neg = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<0) {
                neg++;
            }
        }
        for(int i = 0; i < neg; i++) {
            if(a[i] > 0)
            a[i] *= -1;
        }
        for(int i = neg; i < n; i++) {
            a[i] = abs(a[i]);
        }
        if(is_sorted(a.begin(),a.end())) {
            cout << "YES" << endl;
        } else {
            cout << "NO\n";
        }


    }
}
