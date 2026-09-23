#include<iostream>

using namespace std;

int main(){
    int chaiSales[3][7] = {
        {50, 60, 55, 70, 85, 90, 45},
        {70, 85, 90, 45, 50, 60, 55},
        {50, 60, 90, 45, 55, 70, 85},
    };

    for(int i = 0; i < 3; i++){
        cout << "I am at shop: " << i + 1;
        for(int j = 0; j < 7; j++){
            cout << chaiSales[i][j] << " cups" << endl;
        }
    }

    return 0;
}