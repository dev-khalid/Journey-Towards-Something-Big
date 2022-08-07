//source:- https://leetcode.com/problems/fruit-into-baskets/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int totalFruits (vector<int> & fruits)
    {
        int n = fruits.size();
        unordered_map<int,int> fr;//elaborated name will help other programmers to have a precise idea in one look
        int i = 0,j = 0,ans = 0;
        while(1)
        {

            if(j<n)
                fr[fruits[j]]++;
            if(fr.size()>2)
            {
                cout << "Before ans : i , j " << i << " " << j << endl;
                ans = max(ans,j-i);
                while(fr[fruits[i]]!=0 && i < j)
                {
                    fr[fruits[i]]--;
                    if(fr[fruits[i]]==0)
                    {
                        fr.erase(fruits[i]) ;
                        i++;
                        break;
                    }
                    i++;
                }
                cout << "value of i and j " << i << " " << j << endl;
            }
            if(j<n)
                j++;
            if(j>=n && fr.size()<=2)
            {
                cout << "when we are at end : " << i << " " <<  j << endl;
                ans = max(ans,j-i);
                break;
            }
            ans = max(ans,j-i);
        }
        return ans;
    }
};
int main()
{
    vector<int> fruits = {0,1,0,0,2,2,0,0,0,1,0,1,1,1};
    Solution sol;
    cout << sol.totalFruits(fruits);
}
