class Solution {
public:
    void backtrack(vector<int>& nums,vector<vector<int>>& ans,vector<int>& cur , int i, int n){
        if(i==n){
            ans.push_back(cur);
            return;
        }
        cur.push_back(nums[i]);
        backtrack(nums,ans,cur,i+1,n);
        cur.pop_back();
        backtrack(nums,ans,cur,i+1,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        int n=nums.size();
        backtrack(nums,ans,cur,0,n);
        return ans;
    }
};