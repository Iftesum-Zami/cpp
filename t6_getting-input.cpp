#include<iostream>
using namespace std;

int main()
{
    int age;   // process of char will be the same
    cout << "Enter your age " ;
    cin >> age;

    cout << "Your are" << age << "years old" << endl;

    // -------------------getting string---------------------- //

    string name;
    cout << "Enter your name: ";
    getline(cin, name);  // 2 parameters

    cout << "Hello " << name;  //(remove the 1st para to see output)

    return 0;
}

