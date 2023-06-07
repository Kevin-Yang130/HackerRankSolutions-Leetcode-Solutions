#include <unordered_map>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> map;

        for(auto &str: strs) {
            string sortedstr = str;
            sort(sortedstr.begin(), sortedstr.end());
            map[sortedstr].push_back(str);
        } 

        vector<vector<string>> re;
        for(auto &anagram: map) {
            re.push_back(anagram.second);
        }       
        
        return re;
    }
};
