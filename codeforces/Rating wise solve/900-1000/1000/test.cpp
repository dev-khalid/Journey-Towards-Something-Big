#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {5,5,5,5};
    int ub = upper_bound(v.begin(),v.end()-1,5)-v.begin();
    cout << ub << endl;
}
