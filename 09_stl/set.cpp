#include<bits/stdc++.h>

using namespace std;

// TC: O(log(n))

void explainSet(){
    // Stores only the unique elements in the sorted order
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(5);
    st.emplace(3);

    for(auto it : st){
        cout << it << " ";
    }

    // auto it = st.find(3);
    
    auto low = st.lower_bound(5);
    cout << "\n" << *(low);
    
    auto up = st.upper_bound(5);
    cout << "\n" << *(up);
}

int main(){
    explainSet();
    return 0;
}