// Give the row number, print the entire Nth row of the pascal triangle

#include<bits/stdc++.h>

using  namespace std;

void pascalNcR(int n){
    int ans = 1;
    cout << ans << " ";
    for(int i = 1; i < n; i++){
        ans *= (n - i);
        ans /= i;
        cout << ans << " ";
    }
}

int main(){
    int col;
    cout << "Enter the column number: ";
    cin >> col;

    cout << endl;

    pascalNcR(col);
}