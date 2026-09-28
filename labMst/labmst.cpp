// Problem - Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> s;
    stack<int> mins;

public:

    void push(int val) {
        s.push(val);

        if (mins.empty() || val <= mins.top())
            mins.push(val);
    }

    void pop() {
        if (s.top() == mins.top())
            mins.pop();

        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return mins.top();
    }
};

int main() {
    MinStack st;

    st.push(5);
    st.push(3);
    st.push(7);
    st.push(2);

    cout << "Minimum = " << st.getMin() << endl;
    cout << "Top = " << st.top() << endl;

    st.pop();

    cout << "Minimum after pop = " << st.getMin() << endl;

    return 0;
}