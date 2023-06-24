//Difficulty: Easy
//Process: First we will check if the number is a negative number since negative numbers can never be palindromes. 
// If x is not a negative number, then we will check the if the beginning char of the number and the last char of the number
// and check if they are equal. We will continue to do such a process as we traverse to the middle of the number
// EX:
// 1. 1234321
//    ^     ^    - one IS equal to one
// 2. 1234321
//     ^   ^     - two IS equal to two
// If one of the items does not coincide with its "reflection", then we will set a boolean to false, which we will return. 
        

class Solution {
public:
    bool isPalindrome(int x) {
        bool re = true;
        if(x < 0) {return false;}
        else {
            string temp = to_string(x);
            for(int i = 0;i < temp.size();i++) {
                if(temp[i] != temp[temp.size()-i-1]) {
                    re = false;
                }            
            }
        }

        return re;
    }
};
