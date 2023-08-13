class NumArray {
private:
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        int total = 0;
        for(auto a: nums) {
            total += a;
            prefix.push_back(total);
        }
    }
    
    int sumRange(int left, int right) {
        int rightSum = prefix[right];
        int leftSum = 0; 
        if(left == 0) {
            leftSum = 0;
        } else {
            leftSum = prefix[left-1];
        }
        return rightSum - leftSum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
