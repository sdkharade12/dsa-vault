#include<bits/stdc++.h>

using namespace std;

void explainQueue(){
    queue<int> q;

    q.push(1); // 1
    q.push(2); // 1, 2
    q.emplace(3); // 1, 2, 3

    cout << "This is the last element of the queue: " << q.back() << endl;

    while(!q.empty()){
        cout << q.front() << " "; // Prints the very first element of the queue
        q.pop();
    }
}

int main(){
    explainQueue();
    return 0;
}