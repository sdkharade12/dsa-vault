#include <iostream>

using namespace std;

int main() {
    int teaPacks;
    float pricePerPack;

    cout << "Enter the number of tea packs: ";
    cin >> teaPacks;

    cout << "Enter the price per pack: ";
    cin >> pricePerPack;

    float totalPrice = teaPacks * pricePerPack;
    float finalCost = totalPrice * 1.10f;

    cout << "Your total bill will be $" << finalCost << " inclusive of tax.";

    return 0;
}
