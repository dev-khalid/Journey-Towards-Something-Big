#include<bits/stdc++.h>
using namespace std;
vector<int> x(300005);
void pre_calculation() {
    x[0] = 0;
    for(int i = 1; i < 300005; i++) {
        x[i] = i^x[i-1];
    }

}
int main()
{
    pre_calculation();
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        int xr = x[a-1];
        if(xr==b)
        {
            cout << a << endl;
        }
        else
        {
            if((xr^b)==a) {
                cout << a+2 << endl;
            } else {
                cout << a+1 << endl;
            }
        }
    }
}
