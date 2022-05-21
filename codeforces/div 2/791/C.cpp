#include<bits/stdc++.h>
using namespace std;
bool inRange(int a,int b)
{
    return a+1 <= b;
}
int main()
{
    vector<bool> row(100005,false),col(100005,false);
    int n,q;
    cin >> n >> q;
    int sr = 1e9,er = -1,sc = 1e9,ec = -1,cr=0,cc=0;
    while(q--)
    {
        int t;
        cin >> t;
        if(t==1)
        {
            int x,y;
            cin >> x >> y;
            sr=min(x,sr),er=max(x,er),cr++;
            sc=min(y,sc),ec=max(y,ec),cc++;
            row[x] = true;
            col[y] = true;
        }
        else if(t==2)
        {
            int x,y;
            cin >> x >> y;
            if(x==sr) sr++;
            if(x==er) er--;
            if(sr>er) sr=1e9,er=-1;

            if(y==sc) sc++;
            if(y==ec) ec--;
            if(sc>ec) sc=1e9,ec=-1;

            cc--;
            cr--;
            row[x] = false,col[y] = false;
        }
        else
        {
            int x1,y1,x2,y2;
            cin >> x1 >> y1 >> x2 >> y2;
            if(sr>er) {
                cout << "No\n";
                continue;
            }
            if(sc>ec) {
                cout << "No\n";
                continue;
            }
            bool flag = false;
            if(inRange(x2-x1,cr))
            {
                if(x1 == sr && x2 == er && x2-x1+1==cr)
                {
                    flag = true;
                }
                else
                {
                    flag = true;
                    for(; x1<=x2; x1++)
                    {
                        if(row[x1]==false)
                        {
                            flag = false;
                            break;
                        }
                    }
                }
            }
            if(!flag && inRange(y2-y1,cc))
            {
                if(y1 == sc && y2 == ec && y2-y1+1==cc)
                {
                    flag = true;
                }
                else
                {
                    flag = true;
                    for(; y1<=y2; y1++)
                    {
                        if(col[y1]==false)
                        {
                            flag = false;
                            break;
                        }
                    }
                }

            }
            if(flag) cout << "Yes\n";
            else cout << "No\n";
        }
    }
}











