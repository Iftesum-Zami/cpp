                                 // total four functions
#include<iostream>

using namespace std;

int main()
{
    string phrase = "Zami academy";
    cout << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase[2] << endl;
    cout << phrase.find("academy", 0) << endl; // find() function needs parameter, it will start calculating from 0 index
    cout << phrase.substr(4, 8) << endl;

    string phraseSub = phrase.substr(4, 8);
    cout << phraseSub;

    return 0;
}
