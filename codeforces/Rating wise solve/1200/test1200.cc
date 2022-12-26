#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int xFinder(int n) {
    int down = sqrt(n-1)+1;
    int nearestFullSquare = down*down;
    int need = nearestFullSquare-n;
    return need;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        //now solve for n
        int prevN = n;
        vector<int> v;
        while(1) {
            int x = xFinder(prevN-1);
            if(x==0) {
                for(int i = 0; i < prevN; i++) {
                    v.push_back(i);
                }
                break;
            }
            int y = x;
            while(x<prevN) {
                v.push_back(x++);
            }
            prevN = y;


            //cout << "working: " << prevN << endl;
        }
        reverse(v.begin(),v.end());
        for(auto it: v) {
            cout << it << " ";
        }
        cout << endl;
    }
}

