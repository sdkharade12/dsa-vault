#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public:
        // data members (attributes)
        string teaName; // name of the tea
        int servings; // number of servings
        vector<string> ingredients; // list of ingredients for the tea

        // Member functions
        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: " << endl;

            for(string ingredient : ingredients){
                cout << ingredient << " ";
            }
            cout << endl;
        }

    private:
    string name;

};

int main(){
    Chai chaiOne;

    chaiOne.teaName = "Lemon Tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water", "Lemon", "Honey", "Tea Leaves"};

    chaiOne.displayChaiDetails();

    Chai chaiTwo;

    chaiTwo.teaName = "Masala Chai";
    chaiTwo.servings = 4;
    chaiTwo.ingredients = {"Water", "Milk", "Tea", "Ginger", "Tea Masala"};

    chaiOne.displayChaiDetails();

    return 0;
}