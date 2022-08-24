#include<bits/stdc++.h>
using namespace std;
int leftTop(vector<vector<int>> &v,int row,int col,int i,int j,int sum) {
    if(i<0 || j < 0 ) {
        return sum;
    }
    if(i== 0 || j == 0) {
        return sum+v[i][j];
    }
    return leftTop(v,row,col,i-1,j-1,sum+v[i][j]);
}
int leftBottom(vector<vector<int>> &v,int row,int col,int i,int j,int sum) {
    if(i >= row || j < 0 ) {
        return sum;
    }
    if(i== row-1 || j == 0) {
        return sum+v[i][j];
    }
    return leftBottom(v,row,col,i+1,j-1,sum+v[i][j]);
}
int rightTop(vector<vector<int>> &v,int row,int col,int i,int j,int sum) {
    if(i<0 || j >=col) {
        return sum;
    }
    if(i== 0 || j == col-1) {
        return sum+v[i][j];
    }
    return rightTop(v,row,col,i-1,j+1,sum+v[i][j]);
}
int rightBottom(vector<vector<int>> &v,int row,int col,int i,int j,int sum) {
    if(i >=row || j >= col) {
        return sum;
    }
    if(i== row-1 || j == col-1) {
        return sum+v[i][j];
    }
    return rightBottom(v,row,col,i+1,j+1,sum+v[i][j]);
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        vector<vector<int>> v(n,vector<int> (m));
        for(int i = 0; i < n;i++) {
            for(int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }
        int mx = INT_MIN;
        for(int i = 0; i < n;i++) {
            for(int j = 0; j < m; j++) {
                int total = leftTop(v,n,m,i,j,0)+leftBottom(v,n,m,i+1,j-1,0)+rightTop(v,n,m,i-1,j+1,0)+rightBottom(v,n,m,i+1,j+1,0);
                mx = max(mx,total);
            }
        }
        cout << mx << endl;

    }
}
