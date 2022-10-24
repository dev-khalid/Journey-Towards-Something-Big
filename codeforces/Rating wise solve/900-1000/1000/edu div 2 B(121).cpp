#include<bits/stdc++.h>
using namespace std;
int number_generator(char a, char b)
{
    return (a-'0')*10+(b-'0');
}

int sum(char a,char b)
{
    return (a-'0')+(b-'0');
}
void comparator(char a,char b,bool &small,bool &rd)
{
    //here small is true is sum is less than the number .
    int number = number_generator(a,b);
    int s = sum(a,b);
    if(s<10)
    {
        rd = true;
    }
    if(s > number)
    {
        small = false;
    }

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin  >> s;
        int n = s.size();
        int pos = -1;
        int mx = INT_MIN;
        for(int i = 0; i < n-1; i++)
        {
            bool small = true, rd = false;
            comparator(s[i],s[i+1],small,rd);
            if(!rd) {
                //doesn't reduce digit
                pos = i;

                if(!small) {
                    break;
                }
            }

        }

        if(pos==-1) {
            cout << sum(s[0],s[1]);
            for(int i = 2; i < n; i++) {
                cout << s[i];
            }
        } else {
            for(int i = 0; i < n; i++) {
                if(i==pos) {
                    cout << sum(s[i],s[i+1]);
                    i++;
                } else {
                    cout << s[i];
                }
            }
        }

        cout << "\n";

    }
}
//not more for taday.
