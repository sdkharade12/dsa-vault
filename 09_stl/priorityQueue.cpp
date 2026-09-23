#include<bits/stdc++.h>

using namespace std;

// TC: O(log(n)) -> For push and pop
// TC: O(1) -> For top()

void explainPQ(){
    // By default the priority queue puts the largest element at the top and smallest to the last
    // Maximium Heap / Max Heap
    priority_queue<int> pq;

    pq.push(1);
    pq.push(2);
    pq.push(20);
    pq.push(3);
    pq.push(0);
    pq.emplace(4);

    cout << "This is the Max Heap: " ;
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    
    // To perform Min Heap in priority queue
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(1);
    pq1.push(2);
    pq1.push(20);
    pq1.push(3);
    pq1.push(0);
    pq1.emplace(4);

    cout << "\nThis is the Min Heap: " ;
    while(!pq1.empty()){
        cout << pq1.top() << " ";
        pq1.pop();
    }
}

int main(){
    explainPQ();
    return 0;
}