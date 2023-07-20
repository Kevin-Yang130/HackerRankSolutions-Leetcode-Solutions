class Solution {
public:

    void backtrack(int op, int cl, string &curr, vector<string> &re, int n) {
        if(op == cl && op == n) {
            re.push_back(curr);
            return;
        }   

        if(op < n) {
            curr.push_back('(');
            backtrack(op+1, cl,curr, re, n);
            curr.pop_back();
        } 
        if(cl < op) {
            curr.push_back(')');
            backtrack(op, cl + 1, curr, re, n );
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> re;
        string current = "";

        backtrack(0,0,current, re, n);

        return re;
    }
};
