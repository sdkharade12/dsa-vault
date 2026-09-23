#include<bits/stdc++.h>

using namespace std;

void explainMap(){
    map<int, int> mpp; // {key, value}
    // stores only the unique keys in sorted order

    // Can also declare like this
    // map<int, pair<int, int>> mpp;
    // map<pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    // mpp[{2, 3}] = 10;

    for(auto it : mpp){
        cout << it.first << " : " << it.second << ", ";
    }

    cout << endl;
    auto it = mpp.find(3);
    if (it != mpp.end()){
        cout << it->first << " : " << it->second;
    }
}

int main(){
    explainMap();
    return 0;
}