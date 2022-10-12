#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if(n==1) {
            cout << "NO\n";
            continue;
        }
        int invalid = 0;
        unordered_map<int,bool> right,left;

        for(int i = 0; i < n; i++) {
            if(invalid) {
                //if there is some invalid elements to cover by current element then it's the primary goal
                if(v[i]==invalid) {
                    //then check if it reaches till end
                    left[i] = true;

                    //if it doesn't reaches till end then the current element is also counted as invalid
                    bool reached = false;
                    for(int j = i+1; j < n; j++) {
                        if(right.find(j)!=right.end()) {
                            //previously computed values found
                            reached = right[j];
                            break;
                        }

                    }
                } else {
                    invalid++;
                }
            } else {
                //no invalids there . if with current element i can reach end if i find something thats
                //already computed then it will be loss of time
                for(int )
            }
        }
    }
}
//it is getting so much complex and getting out of my head
//probably not of my level .
