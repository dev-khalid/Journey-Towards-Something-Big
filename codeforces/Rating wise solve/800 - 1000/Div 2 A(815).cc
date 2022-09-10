#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,c,b,d;
        cin >> a >> b >> c >> d;
        long long ad = a*d,bc = b*c;
        if(ad==bc)
        {
            cout << 0 << endl;
        }
        else if(a==0||c==0) {
            cout << 1 << endl;
        }
        else if((ad%bc==0)||(bc%ad==0)) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}
