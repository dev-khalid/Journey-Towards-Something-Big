#include<bits/stdc++.h>
using namespace std;

int length(char input[]) {
    int count = 0;
    for(int i = 0; input[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void prefix(char input[]) {
    char result[100];
    for(int i = 0; input[i] != '\0'; i++) {
        result[i] = input[i];
        result[i+1]= '\0';
        cout << result << endl;
    }
}

//got my head wrap around with vector and string . two basic building block of c++ stl to start of with .

int main() {
    vector<int> b;
    b.push_back(10);
    b.push_back(20);
    for(int i = 0; i < b.size(); i++) cout << b.at(i);

    return 0;
}
