class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
       
        int n=tokens.size();
        for(int i=0;i<n;i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/") {
            int b=num.top();
            num.pop();
            int a=num.top();
            num.pop();
            if(tokens[i]=="+"){
                num.push(a+b);
            }
            else if(tokens[i]=="-"){
                num.push(a-b);
            }
            else if(tokens[i]=="*"){
                num.push(a*b);
            }
            else{
                num.push(a/b);
            }
            }
            else {
                num.push(stoi(tokens[i]));
                }
        }
    
        return num.top();
    }
};
