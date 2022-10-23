#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll need_attack(ll h,ll d) {
    //this is a very tricky way to not using ceil in long long number and also gain the same result
    //let's say i have h which is properly divisible by d . now extra d-1 will be counted as 0
    //let's say i have h E not divisible by d so remainder will be at least of 1 with that 1 and d-1 will
    //make a d which is divisible by d resulting in 1 . so that will be added with h as h/d+1


    return (h+d-1)/d;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll hc,dc,hm,dm,k,w,a;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;

        ll ym,yc;

        bool found = false;
        for(int i = 0; i <= k; i++) {
            //now some on the attack and some on the health
            ll h = hc+(a*i); //improved health
            ll d = dc + (w*(k-i));
            ym = need_attack(h,dm);
            yc = need_attack(hm,d);
            if(yc<=ym) {
                /*
                cout << "For i : " << i << endl;
                cout << "character : " << h << " " << d << endl;

                cout << yc << " " << ym << endl;
                */


                found = true;
                break;
            }
        }
        cout << (found ? "YES\n" :  "NO\n") ;
    }
}
//i have problem with long long count
