// Give n, print the entire pascal triangle

#include<bits/stdc++.h>

using  namespace std;

vector<int> generateRow(int row){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col = 1; col < row; col++){
        ans *= (row - col);
        ans /= (col);
        ansRow.push_back(ans);
    }

    return ansRow;
}

vector<vector<int>> pascalTriangle(int N){
    vector<vector<int>> ans;
    for(int i = 1; i <= N; i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}

int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << endl;

    for (const vector<int>& currentRow : pascalTriangle(row)) {
        for (int value : currentRow) {
            cout << value << ' ';
        }
        cout << endl;
    }
}