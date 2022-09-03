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
        vector<int> evens;
        int odds = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x&1) {
                odds++;
            } else {
                evens.push_back(x);
            }
        }
        if(odds) {
            cout << n-odds << endl;
        } else {
            //as theres no odds found .. search untill any odd is found
            int loop_cnt = 0;
            while(!odds) {
                loop_cnt++;
                for(int i = 0; i < evens.size(); i++) {
                    evens[i] /= 2;
                    if(evens[i]&1) {
                        odds++;
                        break;
                    }
                }
            }

            cout << loop_cnt+evens.size()-1 << endl;

        }

}
}
