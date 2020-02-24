class Solution {
public:
    stack<int>s1,small;
    void push(int value) {
        s1.push(value);
        if(small.empty()||(!small.empty()&&small.top()>value))
            small.push(value);
    }
    void pop() {
        if(s1.top()==small.top())
            small.pop();
            s1.pop();
    }
    int top() {
        return s1.top();
    }
    int min() {
        return small.top();
    }
};
