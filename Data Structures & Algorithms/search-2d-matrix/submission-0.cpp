class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m1=matrix.size();
        int n=matrix[0].size();
        int s=0,e=m1*n-1;
        while(s<=e){
            int m=(s+e)/2;
            int mid=matrix[m/n][m%n];
            if(mid==target){
                return true;
            }
            if(mid<target){
               s=m+1;
            }
            if(mid>target){
                e=m-1;
            }
        }
        return false;
    }
};
