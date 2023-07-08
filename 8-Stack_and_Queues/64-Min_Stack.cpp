class MinStack {
    vector<int> stack;
    int size;
public:
    MinStack() {
        size=0;
    }
    
    void push(int val) {
        stack.push_back(val);
        size++;
    }
    
    void pop() {
        stack.pop_back();
        size--;
    }
    
    int top() {
        return stack[size-1];
    }
    
    //O(n)
    int getMin() {
        int minVal=INT_MAX;
        for(int i=0;i<size;i++){
            if(stack[i]<minVal){
                minVal=stack[i];
            }
        }
        return minVal;
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