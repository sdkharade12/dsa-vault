#include<bits/stdc++.h>

using namespace std;

void explainMultiSet(){
    // Everything is same as set
    // But stores duplicate elements also

    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.emplace(2);
    ms.emplace(2);

    cout << "Before deleting duplicates: ";
    for(auto it : ms){
        cout << it << " ";
    }
    
    ms.erase(ms.find(1)); // Only Deletes the first occurence of the element
    ms.erase(ms.find(2));
    cout << "\nDeleting only the first occurence of the duplicates: ";
    for(auto it : ms){
        cout << it << " ";
    }

    ms.erase(1); // erases all the ocurrances of 1
    cout << "\nAfter deleting duplicates: ";
    for(auto it : ms){
        cout << it << " ";
    }

    // Rest all the functions are similar to the set and the vector.

}

int main(){
    explainMultiSet();
    return 0;
}