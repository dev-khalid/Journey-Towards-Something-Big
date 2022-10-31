#include<bits/stdc++.h>
using namespace std;
struct el
{
    int l,r,ss;
    //ss - segment size
};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<el> v(n);
        vector<int> start_count(1002,0),end_count(1002,0);
        //here elements like left,right will be the index.

        for(int i = 0; i < n; i++)
        {
            cin >> v[i].l >> v[i].r;
            v[i].ss = v[i].r - v[i].l + 1;
            start_count[v[i].l]++;
            end_count[v[i].r]++;

        }


        sort(v.begin(),v.end(),[](el &a,el &b)
        {
            if(a.l==b.l)
            {
                return a.ss > b.ss; //if left match then sort them by
                //there segment size
            }
            return a.l < b.l;
        }
            );


        for(int i = 0; i < n; i++)
        {
            //current elements left and right
            int left = v[i].l,right = v[i].r;
            int d;
            if(left==right)
            {
                d = left;

            }
            //check if start_count[left] > 1 if so then find that one
            else if(start_count[left]>1)
            {
                for(int j = i+1; j < n; j++)
                {
                    if(v[j].l==left)
                    {
                        d = v[j].r+1;
                        break;
                    }
                }
            }
            //else if check end_count[right] > 1 if so then find that one and return the ans
            else if(end_count[right]>1)
            {
                for(int j = i+1; j < n; j++)
                {
                    if(v[j].r==right)
                    {
                        //found the element
                       d = v[j].l-1;
                        break;
                    }
                }
            }
            cout << left << " " << right << " " <<  d << endl;
            start_count[left]--,end_count[right]--;

        }

    }
}


//found an awesome way of implementation .

