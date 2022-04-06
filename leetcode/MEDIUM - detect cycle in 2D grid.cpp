#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checker(int r,int c,int m,int n,int pr,int pc)
    {
        return r>=0 && r < m && c >=0 && c < n && !(r==pr && c == pc);
    }

    bool dfs(int rSize,int cSize,vector<vector<char>> &grid, vector<vector<bool>> &visited,int i,int j,int pr,int pc)
    {
        if(visited[i][j])
        {
            return true;
        }
        visited[i][j] = true;
        vector<int> rowDir = {0,-1,0,1};
        vector<int> colDir = {-1,0,1,0};
        for(int k = 0; k < 4; k++)
        {
            int cr = i+rowDir[k],cc=j+colDir[k];
            if(checker(cr,cc,rSize,cSize,pr,pc))
            {
                if(grid[cr][cc] == grid[i][j])
                {
                    if(dfs(rSize,cSize,grid,visited,cr,cc,i,j))
                    {
                        return true;
                    }
                }
            }
        }

        return false;

    }
    bool containsCycle(vector<vector<char>>& grid)
    {
        int r = grid.size(),c = grid[0].size();

        vector<vector<bool>> visited(r,vector<bool>(c,false));

        //now i need to run a dfs
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(!visited[i][j] && dfs(r,c,grid,visited,i,j,-1,-1)) //current parent is -1-1
                {
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{
    vector<vector<char>> grid
    {{'b','a','c'},{'c','a','c'},{'d','d','c'},{'b','c','c'}};
    Solution sol;
    if(sol.containsCycle(grid))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
