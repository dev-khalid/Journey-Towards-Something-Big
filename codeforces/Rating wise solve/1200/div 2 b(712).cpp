#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a;
        string b;
        cin >> a >> b;
        //store the stopages
        vector<int> boundary;
        vector<char> parity;
        int z = 0, o = 0;
        bool allsame = true;
        for(int i = 0; i < n; i++)
        {
            if(a[i]=='1')
            {
                o++;
            }
            else
            {
                z++;
            }
            if(z==o) boundary.push_back(i);
            if(a[i]==b[i])
            {
                parity.push_back('e');
            }
            else
            {
                allsame=false;
                parity.push_back('o');
            }
        }
        if(allsame) {
            cout << "YES\n";
            continue;
        }
        if(boundary.size()==0) {
            cout <<"NO\n";
            continue;
        }

        //now on every stopage check if all the parity are same or not
        bool broken = false;
        int i = 0;
        for(auto it: boundary) {
            char c = parity[it];
            //cout << "Value of i and boundary: " << i << " " << it << endl;
            for(; i <= it; i++) {
                if(parity[i]!=c){
                    broken=true;
                    break;
                }
            }
            if(broken)break;
        }
        //after the boundary also there can be some elements need to check them as well

        for(; i < n; i++) {
            if(parity[i]!='e') broken=true;
        }
        cout << (broken?"NO\n":"YES\n");
    }
}
/**
100
5
5 6 2 1 4

**/

