class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) {return false;}

        unordered_map<char,char> mp1;
        unordered_map<char,char> mp2;

        string t1 ="", t2 = "";

        for(int i = 0; i < s.size();i++) {
            mp1.emplace(s[i],t[i]);
            mp2.emplace(t[i],s[i]);
        }
        
        // for(auto iter = mp.begin(); iter != mp.end();iter++) {
        //     cout << iter->first << "  " << iter->second << '\n';
        // }
        for(auto l: s) {
            t2 += mp1[l];
        }
        for(auto l: t) {
            t1 += mp2[l];
        }
        cout << t2;
        cout << t1;
        return t2 == t && t1 == s ? true : false;
    }
};
