class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int score = 0;

        for(auto p : s) {
            if(p == '(') {
                st.push(score);
                score = 0;
            } else if(p == ')') {
                score = st.top() + max(score * 2, 1); 
                st.pop();
            }
        }
        return score;
    }
};
