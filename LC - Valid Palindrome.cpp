class Solution {
public:
    bool isPalindrome(string s) {
        
        string temp = "";
        for(auto p: s) {
            if(isalpha(p)) {
                temp+=p;
            } else if(isdigit(p)) {
                temp+=p;
            }
        }
        
        
        for(int i = 0;i<temp.size();i++) {
            int left = i, right = temp.size() - 1 - i;
            if(tolower(temp[left]) != tolower(temp[right])) {
                return false;
            }
        }
        return true;
    }
};
