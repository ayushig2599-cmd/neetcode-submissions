class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        map<vector<int>,vector<string>> mp;
        for(int i=0;i<n;i++){
            vector<int> temp(26,0);
            for(int j=0;j<strs[i].size();j++){
                temp[strs[i][j]-'a']++;
            }
            mp[temp].push_back(strs[i]);
        }
        for (auto const& [key, value] : mp) {
            ans.push_back(value); 
       }
        return ans;
    }
};
