class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        vector<int> alpha(26,0);
        for(int i=0;i<n;i++){
            alpha[s[i]-'a']+=1;
        }
        for(int i=0;i<m;i++){
            if(alpha[t[i]-'a']==0) return false;
            else{
                alpha[t[i]-'a']--;
            }
        }
        for(int i=0;i<26;i++){
            if(alpha[i]!=0) return false;
        }
        return true;
    }
};
