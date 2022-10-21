class Solution
{
public:
    void dfs(int id,vector<vector<int>> hold,vector<bool> &valid)
    {
        if(valid[id]) return;
        valid[id] = true;
        for(auto it: hold[id])
        {
            if(!valid[it])
                dfs(it,hold,valid);
        }
    }
    bool canReach(vector<int>& arr, int start)
    {
        int n = arr.size();
        vector<vector<int>> hold(n);
        vector<bool> valid(n,false);
        vector<int> vI;
        for(int i = 0; i < n; i++)
        {
            if(arr[i]==0)
            {
                vI.push_back(i);
                valid[i]=true;
                continue;
            }
            int jumps = arr[i];
            int left = i-jumps;
            int right = jumps+i;
            //cout << i << " left & right :  " << left << " " << right << " jump : " << jumps << endl;
            if(left >=0)
            {
                hold[left].push_back(i);
            }
            if( right < n)
            {
                hold[right].push_back(i); //current index is dependent on that element
            }
        }

        for(int i = 0; i < hold.size(); i++)
        {
            cout << i << " ----> ";
            for(auto dep: hold[i])
            {
                cout << dep << ",";
            }
            cout << endl;
        }
        //now go for a depth-first-search
        for(int i = 0; i < n; i++)
        {
            if(valid[start]==true)
            {
                return true;
            }
            if(valid[i] && arr[i] == 0)
            {
                //start a depth first search
                //the current id is valid and also it's childs are valid . so make them valid and also their child
                //here we should start a loop and pass all the elements .
                for(auto it: hold[i])
                {
                    dfs(it,hold,valid);
                }
            }
            if(valid[start]==true)
            {
                return true;
            }
        }
        // for(int i = 0; i < n; i++) {
        //     cout << valid[i] << endl;
        // }
        return valid[start];
    }
};
