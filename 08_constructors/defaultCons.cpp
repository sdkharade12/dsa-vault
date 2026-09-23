#include <iostream>
#include <vector>

using namespace std;

class Chai {
 public:
  string teaName;
  int servings;
  vector<string> ingredients;

  // Constructor -> No need to write the returnType
  Chai() {
    // default constructor
    cout << "Constructor called" << endl;
  }

  // Deconstructor is written using ~ConstructorName(){delete ....}

  // For deepcopy -> ConstructorName(oConstructorName& )

  void displayChaiDetails() {
    cout << "Tea Name: " << teaName << endl;
    cout << "Servings: " << servings << endl;
    cout << "Ingredients: " << endl;

    for (string ingredient : ingredients) {
      cout << ingredient << " ";
    }
    cout << endl;
  }
};

int main() {
  Chai defaultChai;

  defaultChai.displayChaiDetails();

  return 0;
}
