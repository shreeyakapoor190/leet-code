class MinStack {
public:
     stack<int>s,min;
        int size=0;
    MinStack() {
    
    }
    
    void push(int val) {
        if(s.empty() ||min.empty())
        {
            min.push(val);
        }
        s.push(val);
        if(min.top()>=val)
            min.push(val);
        size++;
    }
    
    void pop() {
        if(s.top()==min.top())
        {
            min.pop();
        }
        s.pop();
        size--;
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min.top();
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