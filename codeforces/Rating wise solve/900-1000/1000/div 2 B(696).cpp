#include<bits/stdc++.h>
using namespace std;
vector<int> primes;
void prime()
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    int n = 100000;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            primes.push_back(p);
}

int main() {
    prime();
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        int last = 1;
        bool found = false;
        long long ans;
        for(auto it: primes) {
            if(it-last>=n) {
                if(found) {
                    ans = last*it;
                    break;
                }
                last = it;
                found = true;
            }
        }
        cout << ans << endl;
    }
}
//very bad implementation found an amazing one online. The beauty of math has appeared on that solution.
