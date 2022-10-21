class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int cnt = 0;
        if(maxDoubles) {
            while(maxDoubles-- && target>1) {
                if(target&1)
                    cnt++;
                    cnt++;
                    target >>=1;

            }
        }
        return target+cnt-1;
    }
};
