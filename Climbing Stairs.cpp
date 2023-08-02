class Solution {
public:
    int recur(vector<int> &memo, int step,int n) {
        if( step == n) {
            return 1;
        }

        if( step > n) {
            return 0;
        }
        if(memo[step] != 0) {
            return memo[step];
        }
        memo[step] = recur(memo, step + 1, n) + recur(memo,step+2,n);
        return memo[step];
    }


    int climbStairs(int n) {
        vector<int> memo (n+1, 0);
        int step = 0;
        int ways = recur(memo, step, n);
        return ways;
    }
};
