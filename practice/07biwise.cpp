#include <iostream>

using namespace std;

int main() {
    // Bitmask definitions
    const int LEMON_TEA  = 1; // 001 in binary
    const int GREEN_TEA  = 2; // 010 in binary
    const int OOLONG_TEA = 4; // 100 in binary

    // Combine in-stock teas into a single integer using bitwise OR (|)
    // Lemon Tea and Oolong Tea are available; Green Tea is out of stock (not added)
    int stock = LEMON_TEA | OOLONG_TEA; // Binary: 101 (decimal 5)

    int choice;
    cout << "Stock code for Tea type: 1 -> Lemon Tea, 2 -> Green Tea, 4 -> Oolong Tea" << endl;
    cout << "Enter the tea code to check the availability: ";
    cin >> choice;

    // Use bitwise AND (&) to test if that specific bit is turned on
    if (stock & choice) {
        cout << "In stock!" << endl;
    } else {
        cout << "Out of stock!" << endl;
    }

    return 0;
}