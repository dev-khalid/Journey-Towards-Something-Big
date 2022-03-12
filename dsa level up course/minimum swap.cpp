#include<bits/stdc++.h>

using namespace std;

int bfs(vector<bool> &visited,pair<int,int> ap[],int currentIdx) {
    if(visited[currentIdx]) {
        return 0;
    }
    cout << currentIdx << " ";
    visited[currentIdx] = true;
    currentIdx = ap[currentIdx].second;
    return bfs(visited,ap,currentIdx)+1;
    //whats inside six it will be one
    //then go to one and make this visited
    //whats inside one
    //then go to five and make this visited
    //whats inside five
    //then go to zero and make this visited
    //whats inside zero
    //then go to six and check if this is already visited or not .

}
int minSwap(vector<int> &v) {
    int swaps = 0;
    int n = v.size();
    pair<int,int> ap[n];

    vector<bool> visited(n,false);

    for(int i = 0; i < n; i++)  {
        ap[i].first = v[i];
        ap[i].second = i;
    }

    sort(ap,ap+n);

    //now go for the main logic here .
    //this should be inside a bfs function call right ?

    for(int i = 0; i < n; i++) {
        if(!visited[ap[i].second]) {
            //make the call from here .
            int cycles = bfs(visited,ap,ap[i].second);
            cout << " cycle is : " << cycles << endl;
            swaps += cycles-1;
        }
    }




    return swaps;
}

int main() {
    vector<int> v{10,11,5,4,3,2,1};
    cout << minSwap(v);
}
