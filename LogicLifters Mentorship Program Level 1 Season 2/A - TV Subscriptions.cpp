#include<bits/stdc++.h>
using namespace std;
int fr[1000001];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        //memset(&fr[0], 0, fr.size() * sizeof fr[0]);
        memset(fr,0,sizeof fr);
        int n,k,d;
        scanf("%d%d%d",&n,&k,&d);
        int cnt = INT_MAX;
        int v[n];
        int unq = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&v[i]);

            if(i<d)
            {
                fr[v[i]]++;
                if(fr[v[i]]==1)
                {
                    unq++;
                }
                if(i==d-1)
                {
                    if(unq<cnt)
                    {
                        cnt = unq;
                    }
                }
            }
            else
            {
                int last = v[i-d];
                //current element ta age chilo kina? na thakle eita new unique element hisabe count hobe
                if(fr[v[i]]==0)
                {
                    unq++;
                }
                fr[last]--; //dropping the element that is out of the range
                fr[v[i]]++; //inserting new element
                //checking if the dropped element is not present in the set now
                if(fr[last]<=0)
                {
                    unq--;
                }
                if(cnt>unq)
                {
                    cnt = unq;
                }
            }
        }
        cout << cnt << endl;
    }
}


/**
#Queries regarding to this problem:
-what is the time complexity of unordered_set erase function . and how to chose that when to use unordered_set and unordered_map .
-cin ki onk heavy?
-vector ki onk heavy?
*/
