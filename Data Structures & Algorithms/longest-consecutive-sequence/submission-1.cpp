class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int> vis;
        for(int i=0;i<n;i++){
            vis[nums[i]]=i;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int cur=0;
            if(vis.find(nums[i]-1)==vis.end()){
                while(vis.find(nums[i]+cur)!=vis.end()){
                    cur++;
                }
                ans=max(ans,cur);
                cur=0;
            }
        }
        return ans;
    }
};
