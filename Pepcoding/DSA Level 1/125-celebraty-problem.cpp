class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        // check row wise first to identify that whom I know , if I already know somebody than i am not the condidate , move forward . 
        
        for(int i = 0; i < n; i++) { 
            bool goodCandidate = true; 
            for(int j = 0; j < n; j++) { 
                //check in the row to find out that if he knows somebody or not 
                if(i!=j && M[i][j]) { 
                    goodCandidate = false; 
                    break; 
                }
            }
            int knownByCount = 1; 
            if(goodCandidate) { 
                //now check the column to find out that if any cell is zero or not 
               for(int j = 0; j < n; j++) { 
                //check in the row to find out that if he knows somebody or not 
                if(i!=j && M[j][i]==1) { 
                    knownByCount++;
                }
            }
            }
            if(knownByCount==n) { 
                return i; 
            }
        }
        return -1; 
    }
};