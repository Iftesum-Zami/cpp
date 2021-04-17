#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int luckyNums[] = {4, 8, 15, 16, 23, 42};
    cout << luckyNums[2] << endl;

    int generalNumbers[20] = {5, 10, 20, 30, 40};
    generalNumbers[10] = 100;
    cout << generalNumbers[10] << endl;

    int unknownNums[20];
    unknownNums[2] = 7;
    cout << unknownNums[2] << endl;

    return 0;
}