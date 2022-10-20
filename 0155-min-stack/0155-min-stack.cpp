class MinStack {
public:
stack<int> st;
    stack<int> mins;
    MinStack() {
     
    }
    
    void push(int val) {
        st.push(val);
        if(mins.empty() || val<=mins.top())
            mins.push(val);
    }
    
    void pop() {
        int v=st.top();
        st.pop();
        if(mins.top()==v)
            mins.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */