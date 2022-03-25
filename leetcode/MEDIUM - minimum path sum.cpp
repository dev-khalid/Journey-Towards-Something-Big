#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void print(vector<vector<int>> grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout <<  grid[i][j] << " ";
            }
            cout << "\n";
        }
    }
    int minPathSum(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        cout << m << " " << n << endl;
        print(grid);
        cout << "----------------------"<< endl;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i==0 && j!=0 )
                {
                    cout << "first row: " << grid[i][j-1] << " " << grid[i][j] << endl;
                    //no upper move is allowed
                    grid[i][j] += grid[i][j-1];
                }
                else if(i!=0 && j==0)
                {

                    cout << "first col: " << grid[i-1][j] << " " << grid[i][j] << endl;
                    //no left move is allowed
                    grid[i][j] += grid[i-1][j];
                }
                else
                {
                    if(i!=0 && j!=0)
                        grid[i][j] += min(grid[i-1][j],grid[i][j-1]);
                }

            }
        }
        print(grid);
        return grid[m-1][n-1];
    }
};

int main()
{
    vector<vector<int>> grid  {{1,3,1},{1,5,1},{4,2,1}};
    Solution sol;//so new Solution returns me a pointer to that block of memory . and just
    //picking that as a variable returns me an object which properties and methods can be
    //accessed with dot(.) operator.
    cout << sol.minPathSum(grid);
}
