class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n=numbers.size();
        int s=0, e=n-1;
        while(s<=e){
            int sum=numbers[s]+numbers[e];
            if(sum==target){
                ans.push_back(s+1);
                ans.push_back(e+1);
                return ans;
            }
            if(sum<target) s++;
            if(sum>target) e--;
        }
        return ans;
    }
};
