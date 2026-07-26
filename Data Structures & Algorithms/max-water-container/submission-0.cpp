class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=INT_MIN;
        int s=0,e=n-1;
        while(s<e){
            int height=min(heights[s],heights[e]);
            int width=e-s;
            int are=height*width;
            ans=max(ans,are);
            if(heights[s]>heights[e]) e--;
            else s++;

        }
        return ans;
    }
};
