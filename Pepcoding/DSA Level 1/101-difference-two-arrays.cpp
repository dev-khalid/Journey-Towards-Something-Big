#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &a) { 
    for(auto it: a) cout << it; 
    cout << endl; 
}

int main() { 
    bool swaped = false;
    int n,m; 
    cin >> n >> m ; 
    // if(n<m) {  
    //     swaped = true;
    // }
    vector<int> a(n) , b(m), result; 
    // if(swaped) { 
    //     for(auto &it: b) cin >> it; 
    //     for(auto &it: a) cin >> it;
    // } else { 
        for(auto &it: a) cin >> it; 
        for(auto &it: b) cin >> it;
    // }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0, c1 = 0; 
    for(int i = 0; i < max(n,m); i++) { 
        int k , l; 
        if(i < n) { 
            k = a[i]+c1; 
        } else { 
            //exceeded the range 
            //now put a placeholder 
            k = 0+c1; 
        }

        if(i < m ) { 
            l = b[i]+carry; 
        } else { 
            //exceeded the range 
            //now put a placeholder 
            l = 0+ carry; 
        }
        //carry is used to make it 0 again 
        carry = 0, c1=0; 
        if(l==0 && k!=0) { 
            c1=1; 
            result.push_back(10-k);
        }
        else if(k==0 && l!=0)  {
            
        }
        else if(k>=l) { 
            result.push_back(k-l); 
        } else { 
            if(m==n && i==n-1) { 
                result.push_back(k-l);
            } else {
                carry = 1; 
                result.push_back(k+10-l);
            }
        }
    }
    if(carry) { 
        result.push_back(-1*carry);
    }
    if(c1) { 
        
    }
    reverse(result.begin(), result.end());    
    if(swaped) {
        cout << -1; 
    }
    for(auto it: result) cout << it; 
    cout << endl; 
}