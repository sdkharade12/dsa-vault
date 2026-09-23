#include<bits/stdc++.h>

using namespace std;

void explainVector(){
    vector<int> v; // declaring a vector

    v.push_back(1); // adds or appends the number at the end of the vector.
    v.emplace_back(2); // similar to push_back but it is faster than push_pack

    // vector<int>::iterator it = v.begin();
    // it++;
    // cout << *it << " ";

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // vector<int> v4(5, 100); // {100, 100, 100, 100, 100}

    // vector<int> v4(5); // {0, 0, 0, 0, 0}

    vector<int> v1(5, 20);
    vector<int> v2(v1); // Copying v1 into v2

    vector<int> v3 = {20, 10, 15, 6, 7};

    vector<int>::iterator it = v3.begin(); // Points only to the 1st element
    it++;
    // cout << *(it) << " ";

    vector<int>::iterator it_end = v3.end();
    vector<int>::reverse_iterator it_rend = v3.rend();
    vector<int>::reverse_iterator it_rbegin = v3.rbegin();

    // Using for loop to print the vector
    // for(vector<int>::iterator it = v3.begin(); it != v3.end(); it++){
    //     cout << *(it) << " ";
    // }

    // for loop using auto
    // for(auto it = v3.begin(); it != v3.end(); it++){
    //     cout << *(it) << " ";
    // }

    // another shortcut for auto
    for(auto it : v3){
        cout << it << " ";
    }

    // deleting an element
    // 20, 10, 15, 6, 7
    v3.erase(v3.begin() + 1); // {20, 15, 6, 7}
    
    // to delete consecutive elements
    v3.erase(v3.begin() + 2, v3.begin() + 4); // {20, 10, 7} (start, end)

    // Insert function
    vector<int> v3(2, 100); //100, 100
    v3.insert(v3.begin(), 300); // (300, 100, 100)

    // This means start inserting at 2nd position and insert the number 10 twice
    v3.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    // Not needed but still
    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // Size: {10, 30}
    vector<int> v5 = {10, 30};
    cout << v5.size(); // 2

    // {10, 30}
    v5.pop_back(); // {10}

    // Swapping
    // v5 -> {10, 30}
    // v6 -> {30, 40}
    vector<int> v6 = {20, 40};
    v5.swap(v6); // v5 -> {30, 40}, v6 -> {10, 30}

    v5.clear(); // erases the entire vector

    cout << v.empty(); // Return True or False based on the content inside the vector.
}


int main(){
    explainVector();
    return 0;
}