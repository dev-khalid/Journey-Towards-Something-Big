#include<bits/stdc++.h>
using namespace std;
int number(double t,int i)
{
    double div = t*1.0;
    div /= i;


    return ceil(div)*i;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        double l,r;
        cin >> n >> l >> r;
        int i = 1;
        bool found = true;
        vector<int> ans;
        for(; i<= n; i++)
        {
            int num = number(l,i);

            if(num > (int)r)
            {
                found = false;
                break;
            }
            ans.push_back(num);
        }
        if(!found) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            for(auto it: ans) cout << it << " ";
            cout << "\n";
        }

    }
}
