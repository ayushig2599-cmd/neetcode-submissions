class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1=s1.size(),l2=s2.size();
        if(l1>l2) return false;
        vector<int> freq1(26,0);
        
        for(int i=0;i<l1;i++){
            freq1[s1[i]-'a']++;
        }
        int i=0;
        bool ans=false;
        while(i+l1<=l2){
            int c=0;
            vector<int> freq2(26,0);
            for(int j=i;j<(i+l1);j++){
                freq2[s2[j]-'a']++;
            }
            for(int i=0;i<26;i++){
                if(freq1[i]!=freq2[i]){
                    c=1;
                    break;
                }
            }
            i++;
            if(c==0) return true;
        }
        return false;
    }
};
