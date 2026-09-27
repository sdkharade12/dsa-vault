#include <iostream>

using namespace std;

class ArrayStack {
private:
    int* arr;       // Pointer to the dynamically allocated array
    int topIndex;   // Tracks the index of the top element
    int capacity;   // Maximum number of elements the stack can hold

public:
    // Constructor initializes the array and sets topIndex to the "empty" state floor
    ArrayStack(int size) {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1; 
    }

    // Destructor frees the dynamically allocated memory
    ~ArrayStack() {
        delete[] arr;
    }

    bool isEmpty() const {
        return topIndex == -1;
    }

    bool isFull() const {
        return topIndex == capacity - 1;
    }

    int size() const {
        return topIndex + 1; // Since index is 0-based, size is index + 1
    }

    // Moves the index up first, then places the value
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << ".\n";
            return;
        }
        topIndex++; 
        arr[topIndex] = value; 
    }

    // Logically deletes the top element by moving the index down
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop from an empty stack.\n";
            return;
        }
        topIndex--; 
    }

    // Returns the value at the top without moving the index
    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return -1;
        }
        return arr[topIndex];
    }

    // Iterates backward to simulate LIFO printing
    void printStack() const {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return;
        }
        
        cout << "Top -> ";
        for (int i = topIndex; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    ArrayStack st(5); 

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    // This will trigger the Stack Overflow warning since capacity is 5
    st.push(60); 

    st.printStack(); // Output: Top -> 50 40 30 20 10 

    cout << "Top element: " << st.peek() << "\n";
    cout << "Stack size: " << st.size() << "\n";

    st.pop();
    st.printStack(); // Output: Top -> 40 30 20 10 

    return 0;
}