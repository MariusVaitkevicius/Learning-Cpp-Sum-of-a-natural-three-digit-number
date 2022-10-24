#include <iostream>

using namespace std;

 // Calculate the sum of a natural three-digit number.
 // For example, 286 = 16.

int main()
{
    int number, units, dozens, hundreds, sum;

    cout << "enter three digit number: "<< endl;
    cin >> number;
    cout << "digits of a number: " << endl;
       hundreds = number / 100;
       cout << hundreds << " + ";
       dozens = number / 10 % 10;
       cout << dozens << " + ";
       units = number % 10;
       cout << units << "  " << "\n";

       sum = units + dozens + hundreds;
       cout << "Sum = " << sum <<endl;
    return 0;
}
