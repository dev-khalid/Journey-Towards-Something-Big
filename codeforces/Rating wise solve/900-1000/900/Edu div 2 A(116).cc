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
        int n = s.size();
        //now find out the number of ab and number of ba
        int ab = 0,ba = 0;
        int a = 0,b = 0;
        for(int i = 0; i < n-1; i++)
        {
            if(s[i]=='a' && s[i+1]=='b') ab++;
            if(s[i]=='a')
            {
                a++;
            }
            if(s[i]=='b')
            {
                b++;

            }
        }
        if(s[n-1]=='a') a++;
        else b++;
        for(int i = n-1; i >= 1; i--)
        {
            if(s[i]=='a' && s[i-1]=='b') ba++;
        }
        if(ab==ba)
        {
            cout << s << endl;
        }
        else
        {
            int req = abs(ab-ba);
            int mn = min(a,b);
            if(req>mn)
            {
                //it's better to replace minimum amount of characters
                if(a<b)
                {
                    for(int i = 0; i < n; i++)
                    {
                        cout << 'b';
                    }
                }
                else
                {
                    for(int i = 0; i < n; i++)
                    {
                        cout << 'a';
                    }
                }
                cout << endl;
            }
            else if(ab>ba)
            {
                //need to make ba
                int i = 0;
                while(i<n-1 && ba<ab)
                {
                    if((s[i]=='a' && s[i+1]=='b') || (s[i]=='b' && s[i+1]=='a')) i+=2;
                    else
                    {
                        if(s[i]=='b')
                        {
                            if(s[i+1]=='b')
                            {
                                ba++;
                                i+=2;
                                s[i+1]='a';
                            }
                            else i++;
                        }
                        else
                        {
                            if(s[i+1]=='a')
                            {
                                ba++;
                                s[i]=='b';
                                i+=2;
                            }
                            else i++;
                        }
                    }
                }

                if(ab==ba)
                {
                    //it's better to replace minimum amount of characters
                    if(a<b)
                    {
                        for(int i = 0; i < n; i++)
                        {
                            cout << 'b';
                        }
                    }
                    else
                    {
                        for(int i = 0; i < n; i++)
                        {
                            cout << 'a';
                        }
                    }
                    cout << endl;
                }
                else
                {
                    cout << s << endl;
                }
            }
            else
            {
                //need to make ab
                int i = 0;
                while(i<n-1 && ba<ab)
                {
                    if((s[i]=='a' && s[i+1]=='b') || (s[i]=='b' && s[i+1]=='a')) i+=2;
                    else
                    {
                        if(s[i]=='b')
                        {
                            if(s[i+1]=='b')
                            {
                                ba++;
                                i+=2;
                                s[i]='a';
                            }
                            else i++;
                        }
                        else
                        {
                            if(s[i+1]=='a')
                            {
                                ba++;
                                s[i+1]=='b';
                                i+=2;
                            }
                            else i++;
                        }
                    }
                }

                if(ab==ba)
                {
                    //it's better to replace minimum amount of characters
                    if(a<b)
                    {
                        for(int i = 0; i < n; i++)
                        {
                            cout << 'b';
                        }
                    }
                    else
                    {
                        for(int i = 0; i < n; i++)
                        {
                            cout << 'a';
                        }
                    }
                    cout << endl;
                }
                else
                {
                    cout << s << endl;
                }
            }
        }
    }
}
