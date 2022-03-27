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
        if(y&1)
        {
            seg = x/(y+1);
        }
        else
        {
            //y is even
            if(x&1)
            {
                seg = ceil(x*1.0/(y+1));
            }
            else
            {
                seg = x/(y+1);
            }
        }
        //check if y*2>=x ?
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
the trick is divide ones properly in stringOne
and at stringTwo just keep all the elements segregated .
Input


3
23
00000000000000001111111
17
00000000011111111
17
00000000001111111 -- found a mistake .



should change my thinking process . but not more for today .
*/
