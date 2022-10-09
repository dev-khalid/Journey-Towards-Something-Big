//problem link https://open.kattis.com/problems/acm?fbclid=IwAR146HtYvIw57GmX_3stl8Z1LBHOvxgodvt9KdgtvvxQoxTXiHjZnA3CMUs
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total = 0;
    map<char,int> mp;
    map<char,bool> right;
    while(1)
    {
        int m;
        string s;
        char c;
        cin >> m;
        if(m==-1)
        {
            break;
        }
        cin >>c >> s;
        if(s == "right")
        {
            //check if it's already right or not ?
            if(right.find(c)!=right.end() && right[c])
            {
                //already counted
            }
            else
            {
                //count this in total
                total+=m;
                right[c] = true;
            }


        }
        else
        {
            mp[c]++;
        }

    }
    for(auto it: mp)
    {
        char c = it.first;
        if(right.find(c)!=right.end() && right[c])
        {
            total+=it.second*20;
        }
    }
    cout << right.size() << " " << total << endl;
    return 0;
}

