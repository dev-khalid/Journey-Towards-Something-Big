#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<int> cnt(10,0),lp(10,-1);
        int i = 1;
        for(auto it: s) {
            cnt[it-'0']++;
            lp[it-'0'] = i++;
        }
        int currentPosition = 1;
        for(auto it: s) {
            int currElement = (it-'0');

            if(cnt[currElement]<=0) {
                continue;
            }
            //cout << "current element : position =  " << currElement  << currentPosition << endl;
            for(i = 0; i < currElement; i++) {
                //cout << "Last Position of : " << i << " " << lp[i] << endl;
                if(lp[i]>currentPosition && cnt[i]) {
                    cnt[currElement]--;
                    int digit = min(currElement+1,9);
                    cnt[digit]++;
                    lp[digit] = max(lp[digit],currentPosition);
                    //cout << "Enter korche ? ";
                    break;
                }
            }
            currentPosition++;
        }
        for(int el = 0; el < 10; el++) {
            for(i = 0; i < cnt[el]; i++) {
                cout << el;
            }
        }
        cout << endl;
    }
}


