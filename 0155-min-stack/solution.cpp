class MinStack {
private:
    stack<int> s;
    stack<int> ms;

public:
    MinStack() {}

    void push(int value) {
        s.push(value);
        if (ms.empty()) {
            ms.push(value);
        } else {
            ms.push(min(value, ms.top()));
        }
    }

    void pop() {
        s.pop();
        ms.pop();
    }

    int top() { return s.top(); }

    int getMin() { return ms.top(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
