#include <iostream>

using namespace std;

int main() {
  float teaPrice = 49.99;
  int roundedTeaPrice = (int)teaPrice;
  int teaQuantitiy = 2;
  double totalPrice = teaPrice * teaQuantitiy;
  int p;
  cout << totalPrice << endl;

  return 0;
}
