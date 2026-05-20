class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // freq[num] = how many num passed in nums
        unordered_map<int, int> freq;

        // traverse every element in nums
        // we don't need index. just the value 
        for (int n : nums) {
            freq[n]++;
        }

        // priority_queue works like a max-heap by default
        // for pair<int, int> comparison, we first look at "the first" then "the second"
        //
        // pair is:
        // {count, num}
        //
        // the highest freq will be on the top of the heap
        priority_queue<pair<int, int>> pq;

        // traverse the freq map
        // num   = number
        // count = freq of that number
        //
        // structured binding: auto& [num, count]
        // every element in unordered_map is actually like a pair<const int, int>.
        for (auto& [num, count] : freq) {
            pq.push({count, num});
        }

        vector<int> result;

        // highest freq element will be on the top of the heap.
        // choosing an element for k times from the top, means that the element is k-frequent
        while (k--) {
            // pq.top() returns pair<int, int>, which is {count, num}
            // .second is the pair's second value, num.
            result.push_back(pq.top().second);

            // pop this element so that the next highest frequent element comes to the top
            pq.pop();
        }

        return result;
    }
};