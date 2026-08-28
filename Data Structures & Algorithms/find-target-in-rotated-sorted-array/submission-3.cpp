class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1;
        while(s<e){
            int m=s+(e-s)/2;
            if(nums[e]<nums[m]){
                s=m+1;
            }
            else{
                e=m;
            }
        }
        if (target >= nums[s] && target <= nums[n - 1]) {
            e = n - 1;
        } 
        else {
            e = s - 1;
            s=0;
        }
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==target) return m;
            else if(nums[m]<target) s=m+1;
            else e=m-1;
        }
        return -1;
    }
};
