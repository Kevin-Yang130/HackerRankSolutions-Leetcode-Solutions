class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int, int> mp;
        int count=0;
        for(auto a: s){
            count++;
            mp[a]++;
        }
        
        int size = 0;
        bool odd = false;
        for(auto a: mp){
            if(a.second % 2 == 0) {
                size+= a.second;
            } 
            if(a.second % 2 != 0) {
                size+= a.second - 1;
                odd = true;
            }
        }
        size = odd == true ? size + 1 : size;
        return size;
    }
};
