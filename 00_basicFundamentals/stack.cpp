#include<bits/stdc++.h>

using namespace std;

class CustomStack{
    private:
        stack<int> st;

    public:

        bool isEmpty() const{
            return st.empty();
        }

        void insertElement(int value){
            st.push(value);
        }

        int peekElement() const{
            if(isEmpty()){
                cout << "Stack is empty!";
                return -1;
            }
            return st.top();
        }

        void deleteElement(){
            if(isEmpty()){
                cout << "Stack is empty!";
                return;
            }
            st.pop();
        }

        void stackSize(){
            if(isEmpty()){
                cout << "Stack is empty!";
                return;
            }
            cout << "The number of elements in stack: " << st.size() << endl;
        }

        void printStack() const{
            if(isEmpty()){
                cout << "Stack is empty!";
                return;
            }

            stack<int> temp = st;

            while(!temp.empty()){
                cout << temp.top() << " ";
                temp.pop();
            }
            cout << endl;
        }
};

int main(){
    CustomStack st;

    st.insertElement(5);
    st.insertElement(10);
    st.insertElement(15);  
    st.insertElement(20);  

    cout << "The top element is: " << st.peekElement() << endl;

    st.deleteElement();
    st.deleteElement();

    st.stackSize();

    st.printStack();

    return 0;
}