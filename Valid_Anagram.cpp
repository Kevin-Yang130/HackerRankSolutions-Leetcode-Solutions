#include <map>


class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> s1, t1;

        if(s.size() != t.size()) {return false;}
        else {
            for(int i = 0; i < t.size(); i++) {
                s1[s[i]]++;
                t1[t[i]]++;
            }
            if(s1 == t1) { return true;}
            else {return false;}
        }

    }
};
