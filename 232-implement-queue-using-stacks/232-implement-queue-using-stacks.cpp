class MyQueue {
public:
    int size,i,u,s2;
        stack<int> q,q1;
    MyQueue() {
        size=0;
        s2=0;
    }
    
    void push(int x) {
       q.push(x);
        size++;
    }
    
    int pop() {
       while(size!=1)
       {
           u=q.top();
           q.pop();
           q1.push(u);
           size--;
           s2++;
       }
       int x= q.top();
        q.pop();
        size--;
        while(s2!=0)
        {
            u=q1.top();
            q1.pop();
            q.push(u);
            s2--;
            size++;
        }
        return x;
    }
    
    int peek() {
         while(size!=1)
       {
           u=q.top();
           q.pop();
           q1.push(u);
           size--;
           s2++;
       }
        int x= q.top();
        while(s2!=0)
        {
            u=q1.top();
            q1.pop();
            q.push(u);
            s2--;
            size++;
        }
        
        return x;
    }
    
    bool empty() {
     return(size==0);   
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */