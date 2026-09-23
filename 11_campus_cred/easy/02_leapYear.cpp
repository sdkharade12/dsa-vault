#include<bits/stdc++.h>

using namespace std;

bool isLeapYear(int year){
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        return true;
    }else{
        return false;
    }
}

int main(){
    int year = 1900;
    if(isLeapYear(year)){
        cout << year << " is a leap year.";
    }else{
        cout << year << " is not a leap year";
    }
    return 0;
}