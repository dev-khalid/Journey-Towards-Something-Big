#include<bits/stdc++.h>
using namespace std;

void bits(int x)
{
    if(x%3!=0) cout << "\tNot divisible: ";
    cout << "Set bit for : " << x << " -> ";
    vector<int> s;
    while(x)
    {
        s.push_back((x&1));
        x>>=1;
    }
    reverse(s.begin(),s.end());
    for(auto it: s)
    {
        cout << it;
    }
    cout << endl;
}
int main()
{
    for(int i = 1; i < 50; i++)
    {
            bits(i);

    }
}
