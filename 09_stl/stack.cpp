#include<bits/stdc++.h>

using namespace std;

void explainStack(){
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.size();
    
    while(!st.empty()){
        cout << " " << st.top();
        st.pop();
    }
    cout << st.size();
}

int main(){
    explainStack();
    return 0;
}