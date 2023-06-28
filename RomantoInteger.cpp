#include <map>
class Solution {
public:
    int romanToInt(string s) {
        //we will create a map - key: the Roman Character
        // Value: The value of the Roman Numeral
        map<char, int> map;
        map.insert(pair<char, int>('I',1));
        map.insert(pair<char, int>{'V',5});
        map.insert(pair<char, int>{'X',10});
        map.insert(pair<char, int>{'L',50});
        map.insert(pair<char, int>{'C',100});
        map.insert(pair<char, int>{'D',500});
        map.insert(pair<char, int>{'M',1000});
        
        int total = 0;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == 'I' && s[i+1] == 'V') {
                total += 4;
                i += 1;
            } else if (s[i] == 'I' && s[i+1] == 'X') {
                total += 9; 
                i += 1;
            } else if (s[i] == 'X' && s[i+1] == 'L') {
                total += 40;
                i += 1;
            } else if (s[i] == 'X' && s[i+1] == 'C') {
                total += 90;
                i += 1;
            } else if (s[i] == 'C' && s[i+1] == 'D') {
                total += 400;
                i += 1;
            } else if (s[i] == 'C' && s[i+1] == 'M') {
                total += 900;
                i += 1;
            } else {
                total += map[s[i]];
            }
        }
        return total;


    }
};
