#include <iostream>

using namespace std;

int main() {
    int cups;
    int noOfMonths;

    cout << "How many cups you have purchased? -> ";
    cin >> cups;

    cout << "How many months have you been the member of the tea shop? -> ";
    cin >> noOfMonths;

    if(cups > 12 || noOfMonths > 12){
        cout << "Congratulations! You are elgible for the discount!";
    }else{
        cout << "Sorry! you are not eligible for the discount!";
    }

    return 0;
}
