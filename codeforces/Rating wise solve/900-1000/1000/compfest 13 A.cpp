#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i <n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end(),[](string a,string b)
    {
        return a[0]<b[0];
    });
    if(m&1) {
        //odd index .
        //no need to sort it
        //m-1 even index. sort using this thing ?
    } else {
    sort(v.begin(),v.end(),[](string a,string b)
    {
        return a[0]<b[0];
    });
    }

}
