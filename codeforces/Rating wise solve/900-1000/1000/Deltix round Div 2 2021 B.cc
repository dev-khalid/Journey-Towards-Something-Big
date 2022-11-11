#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &ans,int n,int type,int i,int j)
{
    while(n--)
    {
        vector<int> arr = {type,i+1,j+1};
        ans.push_back(arr);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];

        }
        //now start from the end . and try keep a max and a min array ?
        int k = 0;
        vector<vector<int>> ans;
        for(int i = n-1; i>=1; i--)
        {

            //a[i] will be aj
            //second type operation
            int leftId = i-1, leftEl = v[i-1];
            for(int j = i-1; j >=0; j--)
            {
                //checking for the left side . this should be the i
                if(leftEl<v[j])
                {
                    leftId = j;
                    leftEl = v[j];
                }
            }
            int leftOp = v[i]/leftEl+1;

            //a[i] will be ai
            //first type operation
            if(i!=n-1)
            {
                int rightId = i+1,rightEl = v[i+1];
                for(int j = i+1; j <n; j++)
                {
                    //checking for the right side this should be the j
                    if(rightEl>v[j])
                    {
                        rightId= j;
                        rightEl = v[j];
                    }
                }
                //it is guranted that this will be always negative
                int rightOp = v[i]/(-1*rightEl)+1;

                if(leftOp<rightOp)
                {
                    k+=leftOp;
                    print(ans,leftOp,2,leftId,i);
                    v[i]-=(leftOp*leftEl);
                }
                else
                {
                    k+=rightOp;
                    v[i]+=(rightOp*rightEl);
                    print(ans,rightOp,1,i,rightId);
                }
            }
            else
            {
                k+=leftOp;
                print(ans,leftOp,2,leftId,i);
                v[i]-=(leftOp*leftEl);
            }
        }


        int mn = v[0];
        int id = 0 ;
        for(int i = 0; i < n; i++)
        {
            if(mn>v[i])
            {
                id=i;
                mn = v[i];
            }
        }
        int rightOp = v[0]/(-1*mn)+1;
        k+=rightOp;
        v[0]+=(rightOp*mn);
        print(ans,rightOp,1,0,id);





        //handle the last element
        cout << k << endl;
        for(auto it: ans)
        {
            for(auto el: it)
            {
                cout << el << " ";
            }
            cout << endl;
        }
    }
}
//my problem solving skill has dramatically fall down.
