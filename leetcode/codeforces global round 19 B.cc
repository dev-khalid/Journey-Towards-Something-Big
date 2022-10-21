#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    cout << "Printing Vector : " ;
    for(auto it: v)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        //need to make an auxilary vector

        for(int i = 0; i < n; i++)
        {
            ans++;
            if(v[i]==0) {
                ans++;
            }
            for(int j = i+1; j < n; j++)
            {
                if(v[j]==0) {
                    ans++;
                }

                ans++;
            }
        }
        cout << ans << endl;
    }
}
