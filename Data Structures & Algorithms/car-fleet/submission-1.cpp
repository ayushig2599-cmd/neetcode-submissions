class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,double>> car;
        for(int i=0;i<n;i++){
            car.push_back({(double)position[i], (double)(target - position[i]) / speed[i]});
        }
        sort(car.begin(),car.end());
        stack<double> st;
        for(int i=n-1;i>=0;i--){
            if(st.empty() || car[i].second > st.top()){
                st.push(car[i].second);
            }

        }
        return st.size();
    }
};
