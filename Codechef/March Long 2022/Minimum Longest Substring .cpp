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
        int zeros = 0,ones = 0;
        char c;
        for(int i = 0; i < n; i++)
        {
            cin >> c;
            if(c=='1') ones++;
            else zeros++;
        }
        if(n==2 && zeros==ones)
        {
            cout << "01" << endl;
            cout << "10" << endl;
            continue;
        }

        int x = max(zeros,ones);
        int y = min(zeros,ones);

        char big=zeros>=ones?'0':'1',small=big=='0'?'1':'0';
        int bigCnt = x,smallCnt = y;



        int seg;

        seg = x/(y+1);
        while(1) {
            int rightProblem = x-y*seg;
            if(rightProblem > seg) {
                seg++;
            } else if(rightProblem<seg) {
                seg--;
                break;
            } else {
                break;
            }
        }
        if(y*2>=x)
        {
            //put extra least elements in front line ..
            int extra = 2*(y-x/2);//etogula o1 er segment se print korbe
            //now run a loop for 2*extra
            while(extra>0)
            {
                cout << big << small;
                bigCnt--,smallCnt--;
                extra--;
            }
            seg = 2;

        }

        //now as i got my segment i need to find a filling strategy .
        while(bigCnt&&smallCnt)
        {
            int ss = seg;
            while(ss&&bigCnt)
            {
                cout << big;
                ss--,bigCnt-- ;
            }
            if(smallCnt)
            {
                cout << small;
                smallCnt--;
            }
            //eibar eita kaj korbe thik thak moto but eikhane kichu extra element thakbe
            //extra gulake
        }
        while(bigCnt)
        {
            cout << big;
            bigCnt--;
        }
        while(smallCnt)
        {
            cout << small;
            smallCnt--;
        }

        cout << "\n";
        //We are now building second string
        while(x)
        {
            cout << big;
            x--;
        }
        while(y)
        {
            cout << small;
            y--;
        }
        cout << "\n";
    }
}
/*

big range data
x==y
20
00000000001111111111

x<y
21
000000001111111111111

x>y
21
000000000000111111111

x=2*y
15
000000000011111

x>2*y
20
00000000000000011111

x odd and y even
17
00000000000111111
16
0000000000111111
*/
