class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        
        // 1. Build the frequency map
        for (int num : nums) {
            freq[num]++;
        }
        
        // 2. Map frequencies to buckets
        vector<vector<int>> bucket(n + 1);
        for (auto const& [key, value] : freq) {
            bucket[value].push_back(key);
        }
        
        // 3. Extract the top K elements
        vector<int> ans;
        ans.reserve(k); // Prevents expensive memory reallocations
        
        for (int i = n; i >= 0; i--) {
            // If the bucket is empty, this loop is instantly skipped
            for (int num : bucket[i]) {
                ans.push_back(num);
                
                // Return immediately once we have exactly k elements
                if (ans.size() == k) {
                    return ans;
                }
            }
        }
        
        return ans;
    }
};