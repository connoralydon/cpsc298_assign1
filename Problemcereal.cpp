/*
Problem 1 (cereal):
A metric ton is 35,273.92 ounces. Write a program that will read the weight
(console input) of a package of breakfast cereal in ounces and output the weight
in metric tons as well as the number of boxes needed to yield one metric ton of
cereal.
*/



#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv){

  const double METRIC_TON_OZ = 35273.92;

  double packageWeight;
  double packageInTons;
  double packagesTon;
  int packagesTonComplete;

  cout << "Breakfast cereal package weight in ounces: ";
  cin >> packageWeight;
  cout << endl;

  packageInTons = packageWeight / METRIC_TON_OZ;

  packagesTon = METRIC_TON_OZ / packageWeight;

  packagesTonComplete = packagesTon + 1;

  cout << "The package weight in tons is " << packageInTons << "." << endl;
  cout << endl;
  cout << "The amount of packages to make up a ton is " << packagesTon << "." << endl;
  cout << endl;
  cout << "In complete packages this would be " << packagesTonComplete << "." << endl;
  cout << endl;

  return 0;

}
