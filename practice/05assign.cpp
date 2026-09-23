#include <iostream>

using namespace std;

int main() {
    int teaBags;

    cout << "Enter the number of tea bags you have: ";
    cin >> teaBags;

    if(teaBags < 20){
        teaBags += 10;
        cout << "Now you have total " << teaBags << " number of tea bags.";
    }else{
        cout << "You have total " << teaBags << " number of tea bags.";
    }

    return 0;
}
