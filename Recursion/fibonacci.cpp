#include<bits/stdc++.h>
using namespace std;


//Recursive approach
//memoization in recursion makes it faster
//any changes in f will reflect in real one also . as it is passed by reference
int fib(int n,vector<int> &f)  {
   if(n==1) return f[1];
   else if(f[n]) {
    return f[n];
   } else {
    return f[n] = fib(n-1,f) + fib(n-2,f);
   }
}

int main() {

    int n;
    cin >> n;
    vector<int> f(n+1,0);
    f[0] = 0;
    f[1] = 0;
    f[2] = 1;
    cout << fib(n,f) << endl;

    //i know the dynamic programming approach also .
}
