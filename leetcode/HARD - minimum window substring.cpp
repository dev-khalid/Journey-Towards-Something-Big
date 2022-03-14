#include<bits/stdc++.h>
using namespace std;

/**
string minWindow(string s, string t)
{
    unordered_map<char,int> hsh;//holds the frequency
    for(auto el: t)
    {
        hsh[el]++;
    }
    unordered_map<char,int> needed = hsh;
    deque<int> wind; //this will hold the index those forms the word .
    int cnt = t.size(),n = s.size();
    pair<int,int> ans;
    int mn = 10e9;
    for(int i = 0; i < n; i++)
    {

        //checking current element is needed or not
        if(hsh[s[i]])
        {

            //check if the cnt is zero .. if it is zero then we have found the word.
            //found the word
            if(cnt==0)
            {
                if(mn>=(i-wind.front()))
                {
                    //make the cnt one for next possible word construction .
                    ans = make_pair(wind.front(),i);
                    mn = i-wind.front();
                }
            }
            if(needed[s[i]]==0)
            {
                //found a duplicate already need to remove elements from deque
                //and restore the needed array and count variable also named as cnt
                while(s[wind.front()]!=s[i])
                {
                    char c = s[wind.front()];
                    needed[c]++;
                    cnt++;
                    wind.pop_front();
                }
                wind.push_back(i);
            }
            else
            {
                //more such elements is needed so mark this also
                wind.push_back(i);//storing the index only
                cnt--;
                needed[s[i]]--;
            }

            //check if the cnt is zero .. if it is zero then we have found the word.
            //found the word
            if(cnt==0)
            {
                if(mn>=(i-wind.front()))
                {
                    //make the cnt one for next possible word construction .
                    ans = make_pair(wind.front(),i);
                    mn = i-wind.front();
                }
            }
        }
    }
    cout << mn << "  indexes: " << ans.first << " " << ans.second;
    string res = s.substr(ans.first,ans.second);
    return res;
}

*/
string minWindow(string s, string t)
{
    unordered_map<char,int> hsh;//holds the frequency
    for(auto el: t)
    {
        hsh[el]++;
    }
    unordered_map<char,int> needed = hsh;
    deque<int> wind; //this will hold the index those forms the word .
    int cnt = t.size(),n = s.size();
    pair<int,int> ans;
    int mn = 10e9;


    //first find the word in it
    for(int i = 0; i < n; i++)
    {
        //if current element belongs to t only
        if(hsh[s[i]])
        {
            //checking if we need this element any more
            if(needed[s[i]]!=0)
            {
                cnt--;
                needed[s[i]]--;
                wind.push_back(i);
            }
        }
        if(cnt==0)
        {
            ans = {wind.front(),i};
            mn = i-wind.front();
            break;
        }

    }

    //now we need to traverse from the second element in deque and make the count as t.size()
    //or make this one generic so that it can be applied


      for(int i = 0; i < n; i++)
    {
        //if current element belongs to t only
        if(hsh[s[i]])
        {
            //checking if we need this element any more
            if(needed[s[i]]!=0)
            {
                cnt--;
                needed[s[i]]--;
                wind.push_back(i);
            }
            //else remove the last element from deque and take this one .
            else {
                //check if the element is the front of the deque

                //if this is the front element of deque then safely remove that .
                if(s[wind.front()]==s[i]) {
                    wind.pop_front();
                }
                //else check if removing that element helps or keeping that element helps

            }
        }
        if(cnt==0)
        {
            ans = {wind.front(),i};
            mn = i-wind.front();
            break;
        }

    }

    return s.substr(ans.first,ans.second+1);

}
int main()
{
    string s="zfixyfuzinzfuz",t="fuzz";
    cout << minWindow(s,t);
}
/*
Testcases
String : zfixyfuzinzfuz fizfuixzofizzu
key: fuzz

string: uzfxxfzxxxxxxxxxzu //removing each duplicate from the front will not give me the ans
key: fuzz

string: uzfxxfzuzzzz //keeping duplicate from the front will not give me the ans .
key: fuzz

string: axaybcaz
key: abc
*/
