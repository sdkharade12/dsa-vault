#include<bits/stdc++.h>

using namespace std;

int main(){
    string favoriteTea;
    int teaQuantity;

    cout << "Which tea  would like to drink: ";
    getline(cin, favoriteTea);

    cout << "How many cups would like to drink: ";
    cin >> teaQuantity;

    cout << teaQuantity << " cups of \"" << favoriteTea << "\"? Your blood type is officially Earl Grey at this point.\n";

    
    return 0;
}