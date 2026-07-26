class Solution {
public:
    string minWindow(string s, string t) {
        int s1=s.size();
        int t1=t.size();
        if(s1<t1) return "";
        unordered_map<char,int> freq;
        for(int i=0;i<t1;i++){
            freq[t[i]]++;
        }
        int i=0,j=0;
        int c=0;
        string ans="";
        int minlen=INT_MAX;
        int startIdx = -1;
        while(j<s1){
            if(freq.find(s[j])!=freq.end()){
                if(freq[s[j]]>0)
                   c++;
                freq[s[j]]--;
                }
            while (c == t1) {
                if (j - i + 1 < minlen) {
                    minlen = j - i + 1;
                    startIdx = i;
                }
                if (freq.find(s[i]) != freq.end()) {
                    freq[s[i]]++;
                    if (freq[s[i]] > 0) {
                        c--; 
                    }
                }
                i++; 
            }
            j++;
            }
           if(startIdx != -1){
            return s.substr(startIdx, minlen);
           }
           return "";
        }
        
    
    
};
