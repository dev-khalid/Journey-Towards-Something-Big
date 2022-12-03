#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<vector<int>> v(n+2,vector<int> (m+2,0));
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> v[i][j];
            }
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(v[i][j]<0)
                {
                    int max_neg = 0;
                    pair<int,int> id;
                    int min_pos = 0;
                    pair<int,int> idp = {-1,-1};
                    if(j<n)
                    {
                        //can see right side
                        if(v[i][j+1]<0)
                        {
                            max_neg = v[i][j+1];
                            id = {i,j+1};
                        }
                        else
                        {
                            min_pos = v[i][j+1];
                            idp = {i,j+1};
                        }
                    }
                    if(i<n)
                    {
                        //can check down
                        if(v[i+1][j]<0)
                        {
                            if(v[i+1][j]<max_neg)
                            {
                                max_neg = v[i+1][j];
                                id = {i+1,j};
                            }
                        }
                        else
                        {
                            if(v[i+1][j]<min_pos)
                            {
                                min_pos = v[i+1][j];
                                idp = {i+1,j};
                            }
                        }
                    }

                    if(max_neg<0)
                    {
                        //update it
                        v[i][j] *=-1;
                        v[id.first][id.second] *=-1;
                        //cout << "Changing position: " << id.first << "," << id.second << endl;
                    }
                    else
                    {
                        //nothing is negative . so try to trade-off with a positive smaller one
                        if(abs(v[i][j]) > min_pos && idp.first!=-1)
                        {
                            v[i][j]*=-1;
                            v[idp.first][idp.second] *=-1;

                            //cout << "Changing position: " << idp.first << "," << idp.second << endl;
                        }
                    }

                }
            }
        }

        if(v[n][m]<0)
        {
            int i = n,j = m;
            int max_neg = 0;
            pair<int,int> id;
            int min_pos = 0;
            pair<int,int> idp;
            //up check
            if(v[i-1][j]<0)
            {
                if(v[i-1][j]<max_neg)
                {
                    max_neg = v[i-1][j];
                    id = {i-1,j};
                }
            }
            else
            {
                if(v[i-1][j]<min_pos)
                {
                    min_pos = v[i-1][j];
                    id = {i-1,j};
                }
            }
            //left check
            if(v[i][j-1]<0)
            {
                if(v[i][j-1]<max_neg)
                {
                    max_neg = v[i][j-1];
                    id = {i,j-1};
                }
            }
            else
            {
                if(v[i][j-1]<min_pos)
                {
                    min_pos = v[i][j-1];
                    idp = {i,j-1};
                }
            }
            if(max_neg<0)
            {
                //update it
                v[i][j] *=-1;
                v[id.first][id.second] *=-1;
                //cout << "Changing position: " << id.first << "," << id.second << endl;
            }
            else
            {
                //nothing is negative . so try to trade-off with a positive smaller one
                if(abs(v[i][j]) > min_pos)
                {
                    v[i][j]*=-1;
                    v[idp.first][idp.second] *=-1;

                    //cout << "Changing position: " << idp.first << "," << idp.second << endl;
                }
            }
        }
        //cout << "After all changes: " << endl;
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
              ans+=v[i][j];  // cout <<  v[i][j] << " ";
            }
            //cout << "\n";
        }
        cout << ans << endl;
    }
}

/*
int max_neg = 0;
                    pair<int,int> id;
                    int min_pos = 0;
                    pair<int,int> idp;
                    //1.right check
                    if(v[i][j+1]<0)
                    {
                        max_neg = v[i][j+1];
                        id = {i,j+1};
                    }
                    else
                    {
                        min_pos = v[i][j+1];
                        idp = {i,j+1};
                    }



                    //2.left check
                    if(v[i][j-1]<0)
                    {
                        if(v[i][j-1]<max_neg)
                        {
                            max_neg = v[i][j-1];
                            id = {i,j-1};
                        }
                    }
                    else
                    {
                        if(v[i][j-1]<min_pos)
                        {
                            min_pos = v[i][j-1];
                            idp = {i,j-1};
                        }
                    }
                    //3.down check
                    if(v[i+1][j]<0)
                    {
                        if(v[i+1][j]<max_neg)
                        {
                            max_neg = v[i+1][j];
                            id = {i+1,j};
                        }
                    }
                    else
                    {
                        if(v[i+1][j]<min_pos)
                        {
                            min_pos = v[i+1][j];
                            idp = {i+1,j};
                        }
                    }

                    //4.up check
                    if(v[i-1][j]<0)
                    {
                        if(v[i-1][j]<max_neg)
                        {
                            max_neg = v[i-1][j];
                            id = {i-1,j};
                        }
                    }
                    else
                    {
                        if(v[i-1][j]<min_pos)
                        {
                            min_pos = v[i-1][j];
                            id = {i-1,j};
                        }
                    }


                    //after doing all of the operation check if there is any neg or not
                    if(max_neg<0)
                    {
                        //update it
                        v[i][j] *=-1;
                        v[id.first][id.second] *=-1;
                        cout << "Changing position: " << id.first << "," << id.second << endl;
                    }
                    else
                    {
                        //nothing is negative . so try to trade-off with a positive smaller one
                        if(abs(v[i][j]) > min_pos)
                        {
                            v[i][j]*=-1;
                            v[idp.first][idp.second] *=-1;

                            cout << "Changing position: " << idp.first << "," << idp.second << endl;
                        }
                    }
*/
