/*
An employee is paid at a rate of $16.00 per hour for regular hours worked in a
week. Any hours over that are paid at the overtime rate of one and one-half
times that. From the worker’s gross pay, 6% is withheld for Social Security tax,
14% is withheld for federal income tax, 5% is withheld for state income tax, and
$10 per week is withheld for medical insurance. Write a program that will read
in the number of hours worked in a week as input and that will then output the
worker’s gross pay, each withholding amount, and the net take-home pay for the
week.


I know its bad practice to use doubles for dollar amounts, but splitting it
into dollar and cents would take a long time. Not really needed for a program
this simple
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main (int argc, char **argv){

  const double HOURLY_WAGE = 16;
  const double OVERTIME_WAGE = 1.5 * HOURLY_WAGE;
  const int weekLength = 40; //not specified
  const double socialSecurityRate = 0.06;
  const double federalIncomeRate = 0.14;
  const double stateIncomeRate = 0.05;
  const int medicalInsurancerate = 10; //in dollars

  double hoursWorked;

  cout << "Hours worked this week: ";
  cin >> hoursWorked;

  double grossIncome;

  if (hoursWorked <= weekLength) {
    grossIncome = hoursWorked * HOURLY_WAGE;
  }
  else if (hoursWorked > weekLength) {
    grossIncome = weekLength * HOURLY_WAGE; // calculate base wage

    hoursWorked -= weekLength; // adjust for first 40 hours

    grossIncome += hoursWorked * OVERTIME_WAGE; // add to the existing wage
  }


  //now we have untaxed wages netIncome
  double netIncome = grossIncome;

  double socialTax = socialSecurityRate * netIncome;
  double federalTax = federalIncomeRate * netIncome;
  double stateTax = stateIncomeRate * netIncome;

  double totalWithholding = socialTax + federalTax + stateTax + medicalInsurancerate;

  //assuming all the taxes are taken out at once ^ v
  netIncome -= (socialTax + federalTax + stateTax + medicalInsurancerate); //not sure if i need these parenthesis for incriment/decriment operators

  cout << "Gross Income: $" << grossIncome << endl;
  cout << endl;

  cout << "Social security taxes: $" << socialTax << endl;
  cout << "Federal taxes: $" << federalTax << endl;
  cout << "State taxes: $ " << stateTax << endl;
  cout << "Medical insurance: $" << medicalInsurancerate << endl;
  cout << endl;
  cout << "Total withholding: $" << totalWithholding << endl;

  cout << endl;
  cout << "Net Income: $" << netIncome << endl;
}
