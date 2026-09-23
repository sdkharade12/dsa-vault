// Pass by reference

#include<iostream>

using namespace std;

int globalChaiStock = 100; // accessed by everyone

void pourChai(int &cups){ // & is use to pass by refernce
    cups += 5;
    cout << "Poured cups: " << cups << endl;
}

int main(){
    int chaiCups = 2;
    pourChai(chaiCups);
    cout << "Total cups are: " << chaiCups << endl;

    return 0;
}