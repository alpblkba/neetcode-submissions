class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // the famous Two Sum appeared...!
        
        // two numbers nums[i] and nums[j]
        // nums[i] + [j] = target
        // i and j are not the same index

        // if any nums[i] in nums that can achieve the target
        // the complementary nums[j] also exists, and nums[j] is target-nums[i]

        // [3,4,5,6], target = 7
        // output: [0,1]

        /*
            for i, x in enumerate(nums):
            need = target - x
            if need in seen:
                return [seen[need], i]
            seen[x] = i
        */
        // on python, enum works like a map implementation and avoids the O(n^2)
        // on C++ we need something uglier:
        std::unordered_map<int, int> seen;

        // seen[value] = index;
        // when we traversing the nums, we also need the index
        // addend + complementary(need) (of that addend) = target
        for (int index = 0; index < nums.size(); index++) {
            int addend = nums[index];
            int need = target - addend;

            //did we see the complementary before?
            if (seen.find(need) != seen.end()) {  // "if need in seen:"
                return {seen[need], index};
            }
            seen[addend] = index;
        }
        return {};

    }
};
