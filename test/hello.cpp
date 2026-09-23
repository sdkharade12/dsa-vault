#include<iostream> // # -> Preprocessor directives, iostream controls input / output streams

using namespace std; // namespace -> used to containerize to keep codes seperate.

namespace myChai{ // Your own namespace
    void display(){
        // comment
    }
}

int main(){
    myChai::display();
    cout << "Hello Chai from Sarthak";
    return 0;
}