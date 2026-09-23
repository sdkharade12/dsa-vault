#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
        void printNum(int N){
            if (N == 0) return;

            printNum(N - 1);

            cout << N << " ";
        }
};

int main(){
    int num = 10;
    
    Solution sol;

    sol.printNum(num);
    return 0;
}