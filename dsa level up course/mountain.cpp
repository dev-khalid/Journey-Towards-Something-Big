#include<bits/stdc++.h>
using namespace std;

int longestMountain(vector<int>& v) {
    int n = v.size();
    if(n<=2) {
        return 0;
    }

    bool inc = false,dec = false;
    int s = -1;
    int possibleS = -1;
    int mx=0;
    for(int i = 1; i < n; i++) {


        if(inc || dec ) {

            if(inc) {
                if(v[i] > v[i-1]) {}
                else if(v[i]==v[i-1]) {
                    inc = false;
                    s = -1;
                } else {
                    dec = true;
                    inc = false;
                }
            }

            else {
                if(v[i]<v[i-1]) { }
                else if(v[i]==v[i-1]) {
                    mx = max(i-s,mx);
                    inc = false;
                    dec = false;
                    s = -1;

                } else {
                    mx = max(i-s,mx);
                    inc = false;
                    dec = false;
                    s = -1;
                    if(v[i]>v[i-1]) {
                        s = i-1;
                        inc=true;
                    }
                }
            }
        } else {
            if(v[i]>v[i-1]) {
                inc = true;
                s = i-1;
            }
        }

        if(i==n-1 && dec) {
            mx = max(i-s+1,mx);
        }
    }

    return mx;
}

int main() {
    vector<int> v{5770,9921,1853,441,6808,8847,9186,3091,1524,2415};
    cout << longestMountain(v);

}

/**
    Input:
        16
        5 6 1 2 3 4 5 4 3 2 0 1 2 3 -2 4

        7
        2 1 4 7 3 2 5

        3
        2 2 2

    Output:
        9
        5
        0
*/

/*
Write a function that takes input an array of distinct integers, and returns the length
of highest mountain.

>A mountain is defined as adjacent integers that are strictly increasing until they reach a
peak at which they become strictly decreasing .
>>At least 3 numbers are required to form a mountain.

5 10 8 - mountain
5 10 12 not a mountain

Input :
[5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4]
Output:
9


solved the easy version of this one at leetcode . Now need to go for the medium level
*/

