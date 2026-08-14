#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> s1, s2;

public:
    void push(int x) {
        s1.push(x);
    }

    int pop() {
        while (!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int value = s2.top();
        s2.pop();

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        return value;
    }

    int peek() {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        int value = s2.top();

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        return value;
    }

    bool empty() {
        return s1.empty();
    }
};

int main()
{
    MyQueue q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front = " << q.peek() << endl;
    cout << "Removed = " << q.pop() << endl;
    cout << "Front = " << q.peek() << endl;

    return 0;
}