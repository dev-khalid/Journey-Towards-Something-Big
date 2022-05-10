#include<bits/stdc++.h>
using namespace std;
#define MOD 10000007
#define sz 100005
class DSU
{
public:
    int p[sz];
    int setSize[sz];
    int rank[sz];
    int numSets;
    DSU(int N)
    {
        numSets = N;
        for(int i = 0; i < N; i++)
        {
            p[i] = i;
            setSize[i] = 1;
        }
    }
    int findSet(int x)
    {
        return p[x] == x ? x : (p[x] = findSet(p[x]));
    }
    bool isSameSet(int a,int b)
    {
        return findSet(a) == findSet(b);
    }
    void unionSet(int a,int b)
    {
        if(isSameSet(a,b))
        {
            return;
        }
        numSets--;
        int pa = findSet(a),pb=findSet(b);
        if(rank[pa] > rank[pb])
        {
            p[pb] = pa;
            setSize[pa] += setSize[pb];
        }
        else
        {
            p[pa] = pb;
            setSize[pb] += setSize[pa];
            if(rank[pa] == rank[pb]) rank[pb]++;
        }
    }
    int numDisjointSets()
    {
        return numSets;
    }

    int sizeOfSet(int i)
    {
        return setSize[findSet(i)];
    }
};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> first(n);
        vector<int> second(n);
        vector<int> third(n);
        for(int i = 0; i < n; i++)
        {
            cin >> first[i];
            first[i]--;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> second[i];
            second[i]--;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> third[i];
            third[i]--;
        }

        DSU uf(n);
        for(int i = 0; i < n; i++) {
            uf.unionSet(first[i],second[i]);
        }
        set<int> s;
        for(int i = 0; i < n; i++) {
            s.insert(uf.findSet(i));
        }
        for(int i = 0; i < n; i++) {
            if(third[i]==-1) continue;
            s.erase(uf.findSet(third[i]));
            //if an element is already in third
            //the set belongs to that element can not participate in permutation
        }
        int ans = 1;
        int pow = 0;
        for(auto el: s) {
            if(uf.sizeOfSet(el)>1) {
                pow++;
            }
        }
        for(int i = 0; i < pow; i++) {
            ans *= 2L;
            ans %= MOD;
        }
        cout << ans << endl;
    }
}
