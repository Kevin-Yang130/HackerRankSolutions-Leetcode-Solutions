class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string temp = "", re = "";
        int balance = 0;

        //for-loop deals with the cases of having more closing parentheses than opening ones
        for(auto p: s) {
            temp += p;
            if(p == '(') {
                balance++;
            } else if(p == ')') {
                balance--;
            }
            if(balance < 0) {
                temp.pop_back();
                balance++;
            }
        }
        // cout << temp << " " << balance;

        //Now we have to deal with the cases of there being more opening parentheses than closing ones (i.e balance > 0)
        if(balance == 0) {return temp;}
        else if (balance > 0) {
            for(int i = temp.size()-1; i >= 0;i--) {
                if(balance != 0 && temp[i] == '(') {
                    balance--;
                    continue;
                } else {
                    re += temp[i];
                }
            }
            reverse(re.begin(),re.end());
        }
    return re; 
    }
};
