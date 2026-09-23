#include<bits/stdc++.h>

using namespace std;

int main(){
    float basePrice;

    cout << "Enter the base price of tea: ";
    cin >> basePrice;

    float increasedPrice = basePrice * 1.10f;

    int roundPrice = (int)increasedPrice;

    cout << "Original Price: " << basePrice << endl;
    cout << "Price with 10\% increase: " << increasedPrice << endl;
    cout << "Final round off Price: " << roundPrice << endl;

    return 0;
}