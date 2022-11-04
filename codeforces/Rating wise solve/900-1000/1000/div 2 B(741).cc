#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        //check if there is only 2,3,5,7
        vector<int> primes =  {2,3,5,7};
        int ans = -1;
        for(auto it: s)
        {
            int el = it-'0';
            bool found = false;
            for(auto p: primes)
            {
                if(el==p)
                {
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                ans = el;
                break;
            }
        }
        if(ans!=-1)
        {
            cout << 1 << "\n" << ans << "\n";
        }
        else
        {
            //pain
            //after 2 - 2,5,7 is valid - invalid {3}
            //after 3 - 2,3,5 is valid - invalid {7}
            //after 5 - 2,5 is valid   - invalid {3}
            //after 7 - 2,5,7 is valid - invalid {3}
            //as they have talked about deletion .. so we can't sort the array .

            cout << 2 << "\n" ;
            for(int i = 0; i < k-1; i++)
            {
                int c = s[i]-'0';

                bool found = false;
                for(int j = i+1; j < k; j++)
                {
                    int n;
                    n = s[j] - '0';

                    if(c==2 && n!=3)
                    {
                        found = true;
                    }
                    else if(c==3 && n!=7)
                    {

                        found = true;

                    }
                    else if(c==5 && n!=3)
                    {

                        found = true;

                    }
                    else if(c==7 && n!=3)
                    {

                        found = true;

                    }
                    if(found)
                    {
                        cout << c << n << endl;
                        break;
                    }
                }
                if(found) break;
            }

        }

    }
}


//pain
//after 2 - 2,5,7 is valid - invalid {3}
//after 3 - 2,3,5 is valid - invalid {7}
//after 5 - 2,5 is valid   - invalid {3,7}
//after 7 - 2,5,7 is valid - invalid {3}

