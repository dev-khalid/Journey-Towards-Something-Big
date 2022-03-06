/*
Title : Mango Tree Problem
Description: There are some mango trees in a NxN Grid. You have to cut the grid in such a way
that you get minimum mango trees among 4 parts of it . Now maximize your minimums.

# . | # . .
. # | . # #
----|------
. . | . . .
# . | # . #
. # | . # #
For more details check prateek narangs video .

*/

//a bad logic or a bad knowledge of vector char or string

#include<bits/stdc++.h>
using namespace std;

void printVector(vector<string> v,int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout <<  v[i][j] << " ";
        }
        cout << "\n";
    }
}


void numberOfTrees(vector<string> v,int fromRow,int fromCol,int toRow,int toCol) {
    int count = 0;
    for(; fromRow < toRow; fromRow++) {
        for(;fromCol < toCol; fromCol++ ) {
             cout << v[fromRow][fromCol] << " ";
        }
        cout << "\n";
    }
    cout << "End " << endl;


}
void cuttingLine(vector<string> v,int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            numberOfTrees(v,0,0,i,j);
            numberOfTrees(v,0,j,i,N);
            numberOfTrees(v,i,0,N,j);
            numberOfTrees(v,i,j,N,N);
        }
    }a

}
int main() {
    int N;
    cout << "Enter grid size: " << endl;
    cin >> N;
    vector<string> trees(N);
    for(int i = 0; i < N; i++) {
        cin >> trees[i];
    }
    //printVector(trees,N);
    cuttingLine(trees,N);

}

/*
Input  :
5
#.#..
.#.##
.....
#.#.#
.#.##
*/
