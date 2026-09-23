#include<bits/stdc++.h>

using namespace std;

void explainDeque(){
    deque<int> dq;

    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}

    dq.push_front(10); // {10, 1, 2}
    dq.emplace_front(12); // {12, 10, 1, 2}

    dq.pop_back(); // {12, 10, 1}
    dq.pop_front(); // {12, 10}

    for(auto it : dq){
        cout << it << " ";
    }
}

int main(){
    explainDeque();
    return 0;
}