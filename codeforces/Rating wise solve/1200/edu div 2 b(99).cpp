
#include<bits/stdc++.h>

using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int x; cin >> x;

		int steps = 0;
		int z = 0;
		int cnt = 0;
		while (steps * (steps + 1) < 2 * x)
			steps++;
        cnt = (steps)*(steps+1)/2;

        /*
		if (steps * (steps + 1) / 2 == x + 1)
			steps++;

		cout << steps << endl;
		*/
        if(cnt-1==x) {
            steps++;
        }
        cout << steps << endl;
	}
}
