#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;
const ll MOD=1e9+7;
void printer(vector<int> v)
{
    for(auto it: v)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &it: v) {
            cin >> it;
        }
        sort(v.rbegin(),v.rend());//maximum sort . this is amazing man .
        printer(v);

    }
}
/**
100
2
1 1

1
1

1
2

3
1 2 3

3
1 1 3

3
2 2 3

3
4 4 4

Outpur:
Bob
Tie
Alice
Tie
Bob
Alice
Alice
**/
