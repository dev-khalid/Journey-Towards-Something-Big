#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool rangeChecker(ll a,ll b) {
    return (a>= 1 && a <= 10000 && b >=1 && b <= 10000);
}
bool validity(ll a,ll b ,ll sum,ll sub,ll mul,ll div) {
    return (rangeChecker(a,b) && a+b==sum && (a-b==sub || b-a == sub) && a*b==mul && (a/b==div || b/a==div));
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> nums;
        for(int i = 0; i < 4; i++) {
            int val;
            cin >> val;
            nums.push_back(val);
        }
        sort(nums.begin(),nums.end());

        //Case 1:  a = 1  & b = 1
        if(nums[0]==0 && nums[1]==1 && nums[2]==1 && nums[3]==2) {
            cout << 1 << " " << 1 << endl;
            continue;
        }
        //Case 2: a = 1 & b = Number
        if(nums[0]<0 && nums[1]==0) {
            ll b = abs(nums[0]-1);
            if(rangeChecker(b,1) && nums[2]==b && nums[3]==b+1) {
                cout << 1 << " " << b << endl;
                continue;
            }
        }
        //Case 3: a = Number & b = 1
        if(nums[1]==nums[2] && nums[0]>0) {
            ll a = nums[0]+1;
            if(a,1,nums[3],nums[0],nums[2],nums[1]) {
                cout << a << " " << 1 << endl;
                continue;
            }
        }

        ll sum,sub,mul,div;
        //Case 4: a = b
        if(nums[0] == 0 && nums[1] == 1) {
            sub = 0,div=1,sum=nums[2],mul=nums[3];
        }
        //Case 5: a < b
        else if(nums[0] < 0 && nums[1] == 0) {
            sum = nums[2],sub = nums[0],mul = nums[3],div = nums[1];
        }
        //Case 6: a > b
        else {
            sum = nums[2],sub = nums[1],mul = nums[3],div = nums[0];
        }
        ll a,b;
        a = (sum+sub)/2,b=(sum-sub)/2;
        if(validity(a,b,sum,sub,mul,div)) {
            cout << a << " " << b << endl;
        } else {
            cout << -1 << " " << -1 << endl;
        }
    }
}

/*

INput
1
20000 0 100000000 1
*/
