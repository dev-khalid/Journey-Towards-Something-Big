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
        vector<int> e,o;
        for(int i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            if(data&1)
            {
                o.push_back(data);
            }
            else
            {
                e.push_back(data);
            }
        }

        bool alt = true, bt = false;
        ll as = 0LL, bs = 0LL;
        int i = e.size()-1,j = o.size()-1;
        sort(e.begin(),e.end());
        sort(o.begin(),o.end());
        //printer(o);
        //printer(e);
        while(i>=0 && j >=0)
        {

            if(alt)
            {
                //cout << "Alice turn: \n";
                // he will pick the biggest from the two
                if(e[i]>=o[j])
                {
                    //cout << "Entering for : " << e[i] << " " << o[j] << endl;
                    as+=e[i];
                    e[i] = 0;
                    i--;
                }
                else
                {
                    o[j] = 0;
                    j--;
                }
            }
            else
            {
                //cout << "Bob turn: \n";
                if(e[i]<=o[j])
                {
                    bs+=o[j];
                    o[j] = 0;
                    j--;
                }
                else
                {
                    e[i] = 0;
                    i--;
                }
            }
            alt = !alt;
            bt = !bt;
        }
        //finally there will be some values left
        for(; i >=0; i--)
        {
            //this is the even array so alice will get point
            if(alt)
            {
                as+=e[i];
                e[i] = 0;

            }
            alt = !alt;
            bt = !bt;
        }
        for(; j >=0; j--)
        {
            //this is the even array so alice will get point
            if(bt)
            {
                bs+=o[j];
                o[j] = 0;

            }

            alt = !alt;
            bt = !bt;
        }
        //cout << "Bobs total: " << bs << endl;
        //cout << "Alice total: "<< as << endl;
        if(bs==as)
        {
            cout << "Tie\n";
        }
        else if(bs>as)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Alice\n";
        }

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
