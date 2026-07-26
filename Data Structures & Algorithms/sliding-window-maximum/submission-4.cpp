class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int n=nums.size();
        int cur_max=INT_MIN;
        int i=0,j=0;
        int len=0;
        priority_queue<pair<int,int>> pq;
        while(j<n){
            pq.push({nums[j],j});
            len++;
            if(len==k){
               ans.push_back(pq.top().first);
               if(i==pq.top().second){
                pq.pop();
                while(i>pq.top().second){
                    pq.pop();
                }
               }
                i++;
                len--;
            }
            j++;
        }
        return ans;
    }
};
