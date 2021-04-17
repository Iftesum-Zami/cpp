#include<iostream>
using namespace std;

string getDayOfWeek(int dayNumber) {
    string dayName;

    switch (dayNumber) {
        case 0:   // here 0 represents the parameter of switch statement
            dayName = "Friday";
            break;
        case 1:
            dayName = "Saturday";
            break;
        case 2:
            dayName = "Sunday";
            break;
        case 3:
            dayName = "Monday";
            break;
        case 4:
            dayName = "Tuesday";
            break;
        case 5:
            dayName = "Wednesday";
            break;
        case 6:
            dayName = "Thursday";
            break;
        default:
            dayName = "Invalid day number";
            break;
    }

    return dayName;
}

int main()
{
    cout << getDayOfWeek(0) << endl;

    return 0;
}