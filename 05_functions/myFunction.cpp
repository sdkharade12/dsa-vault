#include<iostream>

using namespace std;

// returnType functionName(parameters){ parameters -> when defining func, arguments -> when func calling
//      function body
// }

int checkTemperature(int temp){
    return temp;
}

//  Declaration of function
void serveChai(int cups);

// Declaration and definition of function together
void makeChai(){
    cout << "Boiling water, adding tea leaves, straining..." << endl;
}

// Defining function with same name more than once is calld Function Overloading
void serveChai(string teaType){
    cout << "Serving " << teaType << endl;
}

int main(){
    int temp = checkTemperature(50);
    // cout << "Temperature: " << temp << endl;

    makeChai();
    serveChai(3);
    serveChai("Lemon Tea");

    return 0;
}

// Defining the declared function
void serveChai(int cups){
    cout << "Serving " << cups << " cups of chai" << endl;
}