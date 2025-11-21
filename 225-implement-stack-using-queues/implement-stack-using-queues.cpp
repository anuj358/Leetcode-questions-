class MyStack {
public:
    queue<int> q1, q2;

    MyStack() { }

    void push(int x) {
        q2.push(x);  

        // Move all elements from q1 → q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Swap q1 and q2
        swap(q1, q2);
    }

    int pop() {
        if (q1.empty()) return -1; 
        int x = q1.front();
        q1.pop();
        return x;
    }

    int top() {
        if (q1.empty()) return -1;
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};
