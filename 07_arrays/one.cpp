#include<iostream>

using namespace std;

int main(){
    int chaiTemp[5] = {85, 90, 88, 92, 89};

    cout << "Chai Tempersatures" << endl;
    for(int i = 0; i < 5; i++){
        cout << chaiTemp[i] << " degree C" << endl;
    }

    return 0;
}