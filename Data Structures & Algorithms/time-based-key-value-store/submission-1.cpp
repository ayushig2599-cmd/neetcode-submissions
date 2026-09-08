class TimeMap {
public:
    unordered_map<string,vector<pair<string,int>>> data;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        data[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
       if (data.find(key) == data.end()) return "";
        
        const auto& vec = data[key];
        int s = 0, e = vec.size() - 1;
        int ans = -1; // Tracks the best valid index found so far
        
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (vec[m].second <= timestamp) {
                ans = m;      // Valid timestamp found, record it
                s = m + 1;    // Try to find a larger valid timestamp to the right
            } else {
                e = m - 1;    // Timestamp is too large, search left
            }
        }
        
        return ans == -1 ? "" : vec[ans].first;
      
    }
};
