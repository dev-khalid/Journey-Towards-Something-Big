#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;
int minGoal(string s)
{
    int c1=5,c2=5,g1=0,g2=0;
    for(int i = 0; i < 10; i ++)
    {
        int goal = 0;
        if(s[i]=='1')
        {
            goal = 1;
        }
        if(i&1)
        {
            c2--;
            g2+=goal;
        }
        else
        {
            c1--;
            g1+=goal;
        }
        //cout << "Player 1: " << c1 << " " << g1 << endl;
        //cout << "Player 2: " << c2 << " " << g2 << endl;
        if((c1+g1)<g2)
        {
            //cout << "Here first one surely loosing: " << c1<< " " << g1 << endl;
            return i+1;
        }
        if((c2+g2)<g1)
        {
            //cout << "Here second one surely loosing: " << c2<< " " << g2 << endl;
            return i+1;
        }

    }
    //cout << g1 << " " << g2 << endl;
    return 10;
}
//now it's time to generate
void generatePrediction(int &ans,string s,int i)
{
    if(i==10)
    {
        ans = min(ans,minGoal(s));
        return;
    }
    if(s[i]=='?')
    {
        s[i] = '1';
        generatePrediction(ans,s,i+1);
        s[i] = '0';
        generatePrediction(ans,s,i+1);
    }
    else
    {
        generatePrediction(ans,s,i+1);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int ans = 10;
        generatePrediction(ans,s,0);
        cout << ans << endl;
    }
}
/**
1000
0111010000
1111111111
0100000000

Output:
7
10
9
**/
