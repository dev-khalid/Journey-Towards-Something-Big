#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<char> s(n);
        int zeros = 0,ones = 0;
        char c;
        for(int i = 0; i < n; i++)
        {
            cin >> c;
            if(c=='1') ones++;
            else zeros++;
        }
        if(zeros>=ones)
        {
            for(int i = 0; i < n; i++) {
                if(i&1 && ones) {
                    printf("1");
                    ones--;
                } else {
                    printf("0");
                }
            }
            printf("\n");
            for(int i = 0; i < n; i++) {
                if(zeros) {
                    printf("0");
                    zeros--;
                } else {
                    printf("1");
                }
            }
            printf("\n");
        }
        else
        {
            for(int i = 0; i < n; i++) {
                if(i&1 && zeros) {
                    printf("0");
                    zeros--;
                } else {
                    printf("1");
                }
            }
            printf("\n");
            for(int i = 0; i < n; i++) {
                if(ones) {
                    ones--;
                    printf("1");
                } else {
                    printf("0");
                }
            }
            printf("\n");
        }
    }
}
/*

Input

T
6
000001
001000
100000

6
001111

6
000111



Output

