class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> prefix(n, 0);
        prefix[0] = height[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = max(prefix[i - 1], height[i]);
        }

        int suffix = 0;
        int ans = 0;

        for (int i = n - 1; i >= 0; i--) {
            suffix = max(suffix, height[i]);
            int water = min(prefix[i], suffix) - height[i];
            if (water > 0) {
                ans += water;
            }
        }

        return ans;
    }
};