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
        for(int i = n-1; i>=0; i--)
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
        else if(abs(even+odd)==1)
        {
            cout << -1 << endl;
        }
        else
        {
            int diff = abs(even-odd);
            diff%=3;
            if(diff==2)
            {
                cout << 1 << endl;
            }
            else
            {
                int ans = INT_MAX;
                reverse(s.begin(),s.end());
                if(even<odd)
                {
                    //trying to send an even index to the next available odd index
                    for(int i = 1; i <= n; i++)
                    {
                        int id=i+1,nextId=i+3;
                        //if current index is odd and element is zero
                        if(i&1 && s[i-1]=='0')
                        {

                            //already found a zero now finding one
                            if(id<=n && s[id-1]=='1')
                            {
                                ans = 1;
                                break;
                            }
                            if(nextId<=n  && s[nextId-1]=='1')
                            {
                                ans = min(ans,3);
                            }
                        }

                        //if current index is even and element is one
                        if(i%2==0 && s[i-1]=='1')
                        {

                            //already found a zero now finding one
                            if(id<=n && s[id-1]=='0')
                            {
                                ans = 1;
                            }
                            if(nextId<=n  && s[nextId-1]=='0')
                            {
                                ans = min(ans,3);
                            }
                        }
                    }
                }
                else
                {

                    //trying to send an odd  index 1 to the next available even index 0
                    for(int i = 1; i <= n; i++)
                    {
                        int id=i+1,nextId=i+3;
                        //if current index is even and element is zero
                        if(i%2==0 && s[i-1]=='0')
                        {

                            //already found a zero now finding one
                            if(id<=n && s[id-1]=='1')
                            {
                                ans = 1;
                                break;
                            }
                            if(nextId<=n  && s[nextId-1]=='1')
                            {
                                ans = min(ans,3);
                            }
                        }

                        //if current index is odd and element is one
                        if(i&1 && s[i-1]=='1')
                        {

                            //already found a zero now finding one
                            if(id<=n && s[id-1]=='0')
                            {
                                ans = 1;
                            }
                            if(nextId<=n  && s[nextId-1]=='0')
                            {
                                ans = min(ans,3);
                            }
                        }
                    }
                }
                if(ans==INT_MAX)
                {
                    if(even<odd) {
                        //try to move the biggest one also
                        if(aep>=2) {
                            ans=2;
                        } else {
                            ans=-1;
                        }
                    } else {
                        if(aop>=2) {
                            ans=2;
                        } else {
                            ans=-1;
                        }
                    }
                    cout << ans << endl;
                }
                else
                {
                    cout << ans << endl;
                }
            }
        }

    }
}

//101010111
