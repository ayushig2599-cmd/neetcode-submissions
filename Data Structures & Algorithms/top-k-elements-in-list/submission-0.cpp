class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n =nums.size();
        vector<int> ans;
        vector<vector<int>> bucket(n+1);
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto const& [key, value] :freq){
            bucket[value].push_back(key);
        }
        int i=n;
        while(k>0&&i>=0){
            k=k-(bucket[i].size());
            for(auto k:bucket[i]) ans.push_back(k);
            i--;
        }
        return ans;
    }
};
