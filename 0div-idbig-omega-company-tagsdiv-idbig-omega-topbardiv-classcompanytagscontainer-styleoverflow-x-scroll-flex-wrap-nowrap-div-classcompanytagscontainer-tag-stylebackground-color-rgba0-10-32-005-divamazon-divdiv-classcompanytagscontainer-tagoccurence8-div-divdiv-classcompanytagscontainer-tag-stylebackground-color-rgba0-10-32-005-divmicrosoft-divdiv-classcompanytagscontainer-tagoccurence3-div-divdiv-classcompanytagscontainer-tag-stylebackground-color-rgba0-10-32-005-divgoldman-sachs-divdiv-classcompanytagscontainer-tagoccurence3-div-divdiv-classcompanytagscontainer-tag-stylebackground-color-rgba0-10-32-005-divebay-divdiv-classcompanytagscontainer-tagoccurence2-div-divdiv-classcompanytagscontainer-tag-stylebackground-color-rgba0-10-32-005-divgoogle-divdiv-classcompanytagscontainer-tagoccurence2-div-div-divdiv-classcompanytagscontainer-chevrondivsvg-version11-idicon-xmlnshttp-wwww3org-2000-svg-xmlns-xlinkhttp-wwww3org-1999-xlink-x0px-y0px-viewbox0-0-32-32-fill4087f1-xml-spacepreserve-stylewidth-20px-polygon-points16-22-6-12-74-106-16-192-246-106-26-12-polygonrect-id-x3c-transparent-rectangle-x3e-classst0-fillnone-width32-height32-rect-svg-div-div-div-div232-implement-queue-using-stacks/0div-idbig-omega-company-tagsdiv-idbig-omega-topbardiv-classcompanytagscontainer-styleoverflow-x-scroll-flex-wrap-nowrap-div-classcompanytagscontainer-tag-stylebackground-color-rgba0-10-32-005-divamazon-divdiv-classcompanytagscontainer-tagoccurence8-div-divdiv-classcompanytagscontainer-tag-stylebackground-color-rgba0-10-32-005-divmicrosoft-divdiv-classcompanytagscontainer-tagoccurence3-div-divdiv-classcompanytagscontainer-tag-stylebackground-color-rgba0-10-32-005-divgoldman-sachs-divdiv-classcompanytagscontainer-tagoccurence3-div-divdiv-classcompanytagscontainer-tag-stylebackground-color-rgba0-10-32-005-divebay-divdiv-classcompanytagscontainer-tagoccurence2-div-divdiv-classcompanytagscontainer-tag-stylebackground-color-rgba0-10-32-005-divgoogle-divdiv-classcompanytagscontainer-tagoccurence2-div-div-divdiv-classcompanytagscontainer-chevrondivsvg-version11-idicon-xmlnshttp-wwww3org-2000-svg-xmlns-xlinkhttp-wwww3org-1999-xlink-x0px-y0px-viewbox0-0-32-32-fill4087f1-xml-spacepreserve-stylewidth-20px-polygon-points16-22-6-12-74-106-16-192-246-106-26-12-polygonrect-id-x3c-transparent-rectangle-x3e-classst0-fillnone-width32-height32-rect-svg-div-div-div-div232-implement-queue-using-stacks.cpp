class MyQueue {
public:
    stack<int> st;
    stack<int> temp;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st.empty()) {
            int element = st.top();
            st.pop();
            temp.push(element);
        }
        st.push(x);
        while(!temp.empty()) {
            int element = temp.top();
            temp.pop();
            st.push(element);
        }
    }
    
    int pop() {
        int val = st.top();
        st.pop();
        return val;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
    }
};