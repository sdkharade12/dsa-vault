#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
        bool isPrime(int num){
            if(num <= 1) return false;

            for(int i = 2; i * i <= num; i++){
                if(num % i == 0) return false;
            }
            return true;
        }
};

int main(){
    int num = 29;
    Solution sol;
    
    if (sol.isPrime(num)) {
        cout << num << " is a prime number.\n";
    } else {
        cout << num << " is not a prime number.\n";
    }
    return 0;
}