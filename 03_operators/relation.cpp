#include <iostream>

using namespace std;

int main() {
    int teaCups;

    cout << "Enter the no. of cups you have: ";
    cin >> teaCups;

    if(teaCups >= 10 && teaCups <= 20){
        cout << "Congratulaions you received \"Silver\" badge for your loyalty.";
    }else if(teaCups > 20){
        cout << "Congratulaions you received \"Gold\" badge for your loyalty.";
    }else{
        cout << "Oops! You cannot receive any badge.";
    }
    
    return 0;
}
