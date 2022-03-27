#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<char> s(n);
        int zeros = 0,ones = 0;
        char c;
        for(int i = 0; i < n; i++)
        {
            cin >> c;
            if(c=='1') ones++;
            else zeros++;
        }
        int x = max(zeros,ones);
        int y = min(zeros,ones);
        int seg;
        if(y&1) {
            seg = x/(y+1);
        }
        else {
            //y is even
            if(x&1){
                seg = ceil(x*1.0/(y+1));
            } else {
                seg = x/(y+1);
            }
        }
        //now as i got my segment i need to find a filling strategy .

    }
}
/*
the trick is divide ones properly in stringOne
and at stringTwo just keep all the elements segregated .
Input

4
6
000001

6
001111

6
000111

6
111110

15
000001000001001

Output

001000
100000

101011
111100

010101
000111

101111
111110


*/
