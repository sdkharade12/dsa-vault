#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
        long long factorial(int N){
            if(N == 0) return 1;
            return N * factorial(N - 1);
        }
};

int main(){
    int num = 20;
    Solution sol;
    long long fact = sol.factorial(num);
    cout << "Factorial of " << num << " is: " << fact;
    return 0;
}