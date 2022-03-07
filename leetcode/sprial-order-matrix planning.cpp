#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int row = matrix.size(), col = matrix[0].size();
        int right = col-1,down=row-1,left=0,top=1;//thease are the boundaries
        int irow = 0,icol=0;//thease are the starters
        int cnt = row *col;
        vector<int> result;

        while ( cnt ) {
            //from icol -> right
            for(int colStart = icol; colStart <= right; colStart++) {
                //keeping the first row still
                result.push_back(matrix[irow][colStart]);
                cnt--;
            }
            if(cnt==0) break;
            irow++;

            //from irow -> down
            for(int rowStart = irow;rowStart <= down; rowStart++) {
                //keeping the last column still
                result.push_back(matrix[rowStart][right]);
                cnt--;

            }
            right--;

            if(cnt==0) break;

            //from icol -> left
            for(int colEnd = right; colEnd >= left; colEnd--) {
                //keeping the down still
                result.push_back(matrix[down][colEnd]);
                cnt--;

            }
            down--;

            if(cnt==0) break;
            //from down->top with left col
            for(int rowEnd = down;rowEnd >=top; rowEnd-- ) {
                //keeping the left still
                result.push_back(matrix[rowEnd][left]);
                cnt--;

            }
            icol++;
            top++;
            left++;

        }



        return result;
    }
int main() {
    int r,c;
    cin >> r >> c;

    vector<vector<int>> v(r,(vector<int>(c)));

    //working fine up until this point
    for(auto &nested: v) {
        for(auto &el: nested){
            cin >> el;
        }
    }

    //now need to pass this thing inside a function
    spiralOrder(v);

}
/*

Input :
2 2
1 2
3 4

3 3
1 2 3
4 5 6
7 8 9

3 4
1  2  3  4
5  6  7  8
9 10 11 12

2 4
1  2  3  4
5  6  7  8

1 4
1  2  3  4

3 2
1 2
3 4
5 6

3 1
1
2
3

Output :
1 2 4 3

1 2 3 6 9 8 7 4 5
*/

