#include <iostream>
using namespace std;

class twoStacks {
public:
    int *arr;  // Array to store stack elements
    int top1, top2;  // Indices for top elements of stack1 and stack2
    int size;  // Maximum size of the array

    // Constructor to initialize the two stacks
    twoStacks(int n = 100) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }

    // Function to push an integer into stack1
    void push1(int x) {
        if (top1 + 1 == top2) {
            cout << "Stack1 Overflow\n";
            return;
        }
        top1++;
        arr[top1] = x;
    }

    // Function to push an integer into stack2
    void push2(int x) {
        if (top2 - 1 == top1) {
            cout << "Stack2 Overflow\n";
            return;
        }
        top2--;
        arr[top2] = x;
    }

    // Function to remove an element from the top of stack1
    int pop1() {
        if (top1 == -1) {
            cout << "Stack1 Underflow\n";
            return -1;
        }
        int elem = arr[top1];
        top1--;
        return elem;
    }

    // Function to remove an element from the top of stack2
    int pop2() {
        if (top2 == size) {
            cout << "Stack2 Underflow\n";
            return -1;
        }
        int elem = arr[top2];
        top2++;
        return elem;
    }

    // Destructor to free allocated memory
    ~twoStacks() {
        delete[] arr;
    }
};

int main() {
    twoStacks ts(10);  // Create a twoStacks object with size 10

    // Push elements to stack1
    ts.push1(5);
    ts.push1(10);
    ts.push1(15);

    // Push elements to stack2
    ts.push2(20);
    ts.push2(25);
    ts.push2(30);

    // Pop elements from stack1
    cout << "Popped from stack1: " << ts.pop1() << endl;  // Should print 15
    cout << "Popped from stack1: " << ts.pop1() << endl;  // Should print 10

    // Pop elements from stack2
    cout << "Popped from stack2: " << ts.pop2() << endl;  // Should print 30
    cout << "Popped from stack2: " << ts.pop2() << endl;  // Should print 25

    // Try to pop from an empty stack1
    cout << "Popped from stack1: " << ts.pop1() << endl;  // Should print 5
    cout << "Popped from stack1: " << ts.pop1() << endl;  // Should print -1 (Underflow)

    return 0;
}

