#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int odd = 0, even = 0,aop= 0,aep=0;
        int n = s.size();

        reverse(s.begin(),s.end());
        for(int i = 0; i < n; i++)
        {
            if(s[i]=='1')
            {
                if(i&1)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            else
            {
                if(i&1)
                {
                    aep++;
                }
                else
                {
                    aop++;
                }
            }
        }
        if(abs(even-odd)%3==0)
        {
            cout << 0 << endl;
        }
        else if((even+odd)==1)
        {
            cout << -1 << endl;
        }
        else
        {
            int diff = abs(even-odd);
            diff%=3;
            if(diff==2 || !even || !odd)
            {
                cout << 1 << endl;
                continue;
            }

            int ans = INT_MAX;
            if(even>odd)
            {
                //even boro


                //try choto -> boro
                diff = abs(even-odd+2);
                if(diff%3==0)
                {

                    //even position dorkar
                    if(aep)
                    {
                        ans = min(ans,3);
                        for(int i = 1; i<=n; i++)
                        {
                            int next = i+1, prev = i-1;
                            if(i&1 && s[i-1]=='1')
                            {
                                if(next<=n && s[next-1]=='0')
                                {
                                    ans = 1;
                                    break;
                                }
                                if(prev>=1 && s[prev-1]=='0')
                                {
                                    ans = 1;
                                    break;
                                }
                            }
                        }
                    }
                }

                //try boro->choto
                diff=abs(even-1-odd-1);
                if(diff%3==0)
                {

                    //odd position dorkar
                    if(aop)
                    {
                        ans = min(ans,3);
                        for(int i = 1; i<=n; i++)
                        {
                            int next = i+1, prev = i-1;
                            if(i%2==0 && s[i-1]=='1')
                            {
                                if(next<=n && s[next-1]=='0')
                                {
                                    ans = 1;
                                    break;
                                }
                                if(prev>=1 && s[prev-1]=='0')
                                {
                                    ans = 1;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                //odd boro


                //try choto -> boro
                //even ke dhore odd bananbo odd position dorkar
                diff=abs(odd+2-even);
                if(diff%3==0)
                {

                    //odd position dorkar
                    if(aop)
                    {

                        ans = min(ans,3);
                        for(int i = 1; i<=n; i++)
                        {
                            int next = i+1, prev = i-1;
                            if(i%2==0 && s[i-1]=='1')
                            {
                                if(next<=n && s[next-1]=='0')
                                {
                                    ans = 1;
                                    break;
                                }
                                if(prev>=1 && s[prev-1]=='0')
                                {
                                    ans = 1;
                                    break;
                                }
                            }
                        }
                    }
                }


                //try boro->choto
                diff = abs(odd-even-2);

                if(diff%3==0)
                {

                    //even position dorkar
                    if(aep)
                    {
                        ans = min(ans,3);
                        for(int i = 1; i<=n; i++)
                        {
                            int next = i+1, prev = i-1;
                            if(i&1 && s[i-1]=='1')
                            {
                                if(next<=n && s[next-1]=='0')
                                {
                                    ans = 1;
                                    break;
                                }
                                if(prev>=1 && s[prev-1]=='0')
                                {
                                    ans = 1;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            if(ans==INT_MAX)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }

    }
}

/**
Not in my range .
500
11001
11100
111
1010
1110
101010111
0000
*/
