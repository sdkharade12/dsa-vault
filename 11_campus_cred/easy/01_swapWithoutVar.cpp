#include<bits/stdc++.h>

using namespace std;

void swap(int num1, int num2){
    cout << "Original numbers: a = " << num1 << ", b = " << num2;
    
    num1 += num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    
    cout << "\nSwapped numbers: a = " << num1 << ", b = " << num2;    
}

void optimizedSwap(int &num1, int &num2){
    if(num1 == num2) return;

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
}

int main(){
    int num1 = 5;
    int num2 = 3;

    cout << "Original numbers are: a = " << num1 << ", b = " << num2;
    
    optimizedSwap(num1, num2);
    
    cout << "\nSwapped numbers are: a = " << num1 << ", b = " << num2;

    return 0;
}