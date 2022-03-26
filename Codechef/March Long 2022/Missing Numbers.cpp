#include<bits/stdc++.h>
using namespace std;
bool intChecker(int n)
{
    return floor(n)==ceil(n);
}
bool rangeChecker(int n)
{
    return n>=1 && n <=10000;
}
bool validity(int a,int b,int mul,int div)
{
    if(a*b==mul)
    {
        if(a/b==div || b/a==div)
        {
            return true;
        }

    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> nums;
        for(int i = 0; i < 4; i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }
        sort(nums.begin(),nums.end());
        if(nums[1] == nums[2] )
        {
            cout << 1 << " " << nums[2] << endl;
            continue;
        }
        else
        {
            int aPb = nums[2];
            int aMb;
            int mul = nums[3],div;
            //all positive
            if(nums[0]>=0)
            {
                //one zero
                if(nums[0]==0)
                {
                    //nums[0] is a-b;
                    aMb = nums[0];
                    div = nums[1];
                }
                else
                {
                    //nums[1] is a-b;
                    aMb = nums[1];
                    div = nums[0];
                }
                //no zero
            }
            else
            {
                //one negative
                div = nums[1];
                aMb = nums[0];
            }
            int a = (aPb + aMb)/2;
            int b = (aPb-aMb)/2;
            if(intChecker(a) && intChecker(b) && rangeChecker(a) && rangeChecker(b) && validity(a,b,mul,div))
            {
                cout << a << " " << b << endl;
            }
            else
            {
                //eikhane last time check kore nibo just
                //dhore nibo first element 1 ..
                if(nums[0]<0)
                {
                    //possibility to have a solution
                    a = 1;
                    b = -1*(aMb) + 1;

                    mul = nums[2],div = nums[1];
                    if(nums[3]==a+b && rangeChecker(a) && rangeChecker(b) && validity(a,b,mul,div))
                        {cout << a << " " << b << endl; continue; }

                }

                    cout << -1 << " " << -1 << endl;
            }
        }

    }
}

/*
8,9
9,8
1,3
3,1

4
17 -1 72 0
17 1 72 1
-2 4 3 0
3 3 2 4
*/
