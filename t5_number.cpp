#include<iostream>
#include<cmath>  // for math functions

using namespace std;

int main()
{
    cout << 5 + 7 << endl;
    cout << 5 * 7 << endl;
    cout << 5 - 7 << endl;
    cout << 8 / 4 << endl;
    cout << 10 % 3 << endl; // remainder or mod
    cout << 4 + 5 * 10 << endl;
    cout << (4 + 5) * 10 << endl;

    // ----------------------------------------------------- //

    int wNum = 5;
    double dNum = 5.5;

    wNum++; // wNum = wNum + 1 | wNum += 20 | wNum -= 20 | wNum *= 20 | wNum /= 20
    cout << wNum << endl;


    // -------How a decimal and integer works together--------- //

    cout << 5.5 + 9 << endl;
    cout << 4 / 8 << endl;
    cout << 4.0 / 8 << endl;

    // -------Some math functions--------- //

    cout << pow(2, 5) << endl;
    cout << sqrt(36) << endl;    // also takes decimal
    cout << round(4.3) << endl;
    cout << round(4.6) << endl;
    cout << ceil(4.1) << endl;
    cout << floor(4.9) << endl;
    cout << fmax(3, 10) << endl;  // takes 2 parameters
    cout << fmin(3, 10) << endl;

    return 0;
}











