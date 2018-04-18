class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int locate=0;
        for(; locate<nums.size() && target>nums[locate] ; locate++);
        
        return locate;
    }
};
