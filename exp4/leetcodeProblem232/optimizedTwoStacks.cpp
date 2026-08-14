#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> inputStack;
    stack<int> outputStack;

    void transfer() {
        if (outputStack.empty())
        {
            while (!inputStack.empty())
            {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
    }

public:
    void push(int x) {
        inputStack.push(x);
    }

    int pop() {
        transfer();

        int value = outputStack.top();
        outputStack.pop();

        return value;
    }

    int peek() {
        transfer();
        return outputStack.top();
    }

    bool empty() {
        return inputStack.empty() && outputStack.empty();
    }
};

int main() {
    MyQueue q;

    q.push(5);
    q.push(10);
    q.push(15);

    cout << "Front = " << q.peek() << endl;
    cout << "Removed = " << q.pop() << endl;
    cout << "Front = " << q.peek() << endl;
    cout << "Is Empty = " << q.empty() << endl;

    return 0;
}