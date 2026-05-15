class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        // if we iterate the nums, we keep track of each element. 
        // second occurence returns true. 
        // sorted list shows the adjacent number as the duplicate


        // [1, 3, 3, 5, 9]
        // nums[k] = nums[k+1]
        
        vector<int> nums_sorted = nums;
        sort(nums_sorted.begin(), nums_sorted.end());
        for (int index = 0; index + 1 < nums_sorted.size(); index++) {
            if (nums_sorted[index] == nums_sorted[index+1]) { 
                return true;
            }
        }
        return false;

    }
};