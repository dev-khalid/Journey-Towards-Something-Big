#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 i128;
const ll MOD=1e9+7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> level(n,0);
        vector<bool> marked(n,false);
        queue<int> q; //push indexes.
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i]==n)
            {
                marked[i] = true;
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int id = q.front();
            q.pop();
            //for left part
            int leftMax = 0;
            int leftId = -1;
            for(int i = id+1; i < n && !marked[i]; i++)
            {
                if(v[i]>leftMax)
                {
                    leftMax = v[i];
                    leftId = i;
                }
            }
            int rightMax = 0;
            int rightId = -1;
            for(int i = id-1; i >= 0 && !marked[i]; i--)
            {
                if(v[i]>rightMax)
                {
                    rightMax = v[i];
                    rightId = i;
                }
            }
            //cout << "leftId rightId" << leftId << " " << rightId << endl;
            //cout << "Max left , right" << leftMax << " " << rightMax << endl;
            if(leftId!=-1)
            {
                q.push(leftId);
                marked[leftId] = true;
                level[leftId] = level[id]+1;
            }
            if(rightId!=-1) {
                q.push(rightId);
                marked[rightId] = true;
                level[rightId] = level[id]+1;
            }
        }
        for(int i = 0; i < n; i++) {
            cout << level[i] << " ";
        }
        cout << endl;
    }
}

