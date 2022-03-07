#include<bits/stdc++.h>
using namespace std;

//this problem could be solved iteratively and i know how to do that .
//i could also made my code cleaner and good formated but not gonna waste my time on that right now .
int power(int a,int n,vector<int> &mem) {
    if(n==1) {
        return a;
    }
    int subProblem;
    if(mem[n/2]) {
        subProblem = mem[n/2];
    } else {
        subProblem = power(a,n/2,mem);
        mem[n/2] = subProblem;
    }
    int calculatedSq = subProblem*subProblem;
    if(n&1) {
        return calculatedSq*a;
    }
    else return calculatedSq;
}

int main() {
    int n,a;
    cin >> a >> n;
    vector<int> mem(n,0);

    cout << power(a,n,mem) << endl;
}

