#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
        int largestOfThree(int num1, int num2, int num3){
            if(num1 >= num2 && num1 >= num3) return num1;
            else if(num2 >= num1 && num2 >= num3) return num2;
            else return num3;
        }
};

int main(){
    int num1 = 1;
    int num2 = 4;
    int num3 = 3;
    
    Solution obj;

    int maxNum = obj.largestOfThree(num1, num2, num3);

    cout << "The largest of the three is: " << maxNum;
    return 0;
}