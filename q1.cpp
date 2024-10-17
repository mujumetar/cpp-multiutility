#include <iostream>
using namespace std;

int main(){
    float f, c;
    cout << "Enter the temperature in Celsius : ";
    cin >> c;
    cout << endl;
    f = (c * 9.0) / 5.0 + 32;
    cout << endl;
    cout << "********************************************************************************************************" <<endl;
    cout << endl;
    cout << "The temperature in Fahrenheit : " << f << endl;
     cout << endl;
    cout << "********************************************************************************************************" <<endl;
    cout << endl;
    return 0;
}