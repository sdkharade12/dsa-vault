#include<bits/stdc++.h>

using namespace std;

void explainPair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> pA = {1, {2, 3}};
    cout << pA.first << " " << pA.second.second << " " << pA.second.first << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 5}, {7, 6}};
    cout << arr[2].first;
}

int main(){

    explainPair();
    return 0;
}