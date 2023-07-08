class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> set (nums.begin(), nums.end());
        return  set.size() == nums.size() ? false: true;
    }
};
