class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        int n = strs.size();
        for(int i=0;i<n;i++){
            int n1=strs[i].size();
            string s = "";
            s=s+to_string(n1)+"#"+strs[i];
            encoded=encoded+s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='#') temp+=s[i];
            else{
                int t=stoi(temp);
                temp="";
                string k="";
                i++;
                while(t--){
                    k=k+s[i];
                    i++;
                }
                i--;
                ans.push_back(k);
            }
        }
        return ans;
    }
};
