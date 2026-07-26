class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int m = 0;
        unordered_map<char,int> freq;
        int ans=0;
        int l=0;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            m=max(m,freq[s[i]]);
            while((i-l+1)-m > k){
                freq[s[l]]--;
                l++;
            }
            ans=max(ans,(i-l+1));
        }
        return ans;
    }
};
