class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n<=1) return n;
        unordered_map<char,int> freq;
        int i=0,e=0;
        int ans=0;
        while(e<n){
            freq[s[e]]++;
            while(freq[s[e]] > 1){
                freq[s[i]]--;
                i++;
            }
            int len = e - i + 1;
            ans = max(ans, len);
            e++;
        }
        return ans;
    }
};
