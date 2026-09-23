// Given row and column, print the number at that place.
#include<bits/stdc++.h>

using namespace std;

int pascalNcR(int n, int r){
    long long res = 1;
    for(int i = 0; i < r - 1; i++){
        res = res * (n - 1 - i);
        res = res / (i + 1);
    }
    return res;
}

int main(){
    cout << "The element at 4th row and 2nd column is: " << pascalNcR(4, 4);
}