#include <map>

//HASMAP SOLUTION

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


// ALTERNATE SOLUTION - SORTING AND THEN COMPARING

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) {return false;}
        else {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            for(int i = 0; i < t.size(); i++) {
                if(s[i] != t[i]) {return false;}
            }
        }
        return true;
    }
};
