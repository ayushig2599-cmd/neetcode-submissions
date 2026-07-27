class MinStack {
public:
        stack<int> num;
        stack<int> m;
    MinStack() {
        
    }
    
    void push(int val) {
        num.push(val);
        if(m.empty()) m.push(val);
        else {
            m.push(min(val,m.top()));
        }
    }
    
    void pop() {
        num.pop();
        m.pop();
    }
    
    int top() {
        return num.top();
    }
    
    int getMin() {
        return m.top();
    }
};
