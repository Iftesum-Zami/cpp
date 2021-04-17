#include<iostream>
using namespace std;

// void sayHi(){
//     cout << "Hello User";
// }

void sayHi(string name, int age){
    cout << "Hello " << name << ", you are " << age << endl;
}

int main()
{
    // sayHi();
    sayHi("Zami", 22);
    sayHi("Sonet", 23);
    sayHi("Nasif", 21);

    return 0;
}

// won't work after the main function
