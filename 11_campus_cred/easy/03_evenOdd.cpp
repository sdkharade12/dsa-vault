#include<bits/stdc++.h>

using namespace std;

bool isEvenOdd(int num){
    return num % 2 == 0;
}

bool optimizedIsEven(int num){
    return(num & 1) == 0;
}

int main(){
    int num = 21;
    if(optimizedIsEven(num)){
        cout << num << " is even";
    }else{
        cout << num << " is odd";
    }

    return 0;
}