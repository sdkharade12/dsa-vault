#include<iostream>
#include<string>

using namespace std;

int main(){
    string userTea;
    int teaQauntity;

    cout << "What would you like to order in tea?\n";
    getline(cin, userTea);

    cout << "How many cups of " << userTea << " would you like to have?" << endl;
    cin >> teaQauntity;

    cout << teaQauntity << userTea;

    return 0;
}