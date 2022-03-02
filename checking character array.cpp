#include<bits/stdc++.h>
using namespace std;

int length(char input[]) {
    int count = 0;
    for(int i = 0; input[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char a[100];
    char b[200];
    char _[1];
    cin >> a;
    cin.getline(_,1);
    cout << "it's a" << a << endl;
    cout << "enter b" << endl;
    cin.getline(b,200);
    //a[4]='\0'; //the null character that is used as terminator or reading via cout.


    cout << b;

    return 0;
}
