#include<bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // If they are same
    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra(){
    // sort(a, a + n);
    
    // sort(v.begin(), v.end())

    // sort(a, a + n, greater<int>); For sorting in descending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort this in according to the second element
    // if second element is the same, then sort
    // it according to the first element but in descending

    // sort(a, a + n, comp);

    int num = 7;
    int cnt = __builtin_popcount(num);

    long long num1 = 123456789;
    int cnt = __builtin_popcountll(num1);
    
    string s = "123";
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));

    auto maxi = *max_element(begin(a), end(a));
}