#include <iostream>
using namespace std;

// first and last digit sum

int main () {
 int salary;
 cout << "Your salary: ";
 cin >> salary;

 int hra = 10*salary /100;
 int da = 5*salary /100;
 int ta = 8*salary /100;

int gross = salary + hra + da + ta;
cout << "gross salary: " << gross;
}