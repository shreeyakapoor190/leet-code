class MyStack {
public:
    int size=0,s2=0,i,u;
    queue<int> q1,q2;
    MyStack() {
      
    }
    
    void push(int x) {
        q1.push(x);
        size++;
    }
    
    int pop() {
               while(size!=1)
        {
            u=q1.front();
            q1.pop();
            q2.push(u);
            s2++;
            size--;
        }
        int x=q1.front();
        q1.pop();
        size--;
        while(s2!=0)
        {
            u=q2.front();
            q2.pop();
            q1.push(u);
            s2--;
            size++;
        }
        return x;
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return(size==0);
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */