#include <iostream>
#include <queue>
using namespace std;

class MyQueue {
private:
    queue<int> q;

public:
    void push(int x) {
        q.push(x);
    }

    int pop() {
        int frontElement = q.front();
        q.pop();
        return frontElement;
    }

    int peek() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main()
{
    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front = " << q.peek() << endl;
    cout << "Removed = " << q.pop() << endl;
    cout << "Front = " << q.peek() << endl;

    return 0;
}