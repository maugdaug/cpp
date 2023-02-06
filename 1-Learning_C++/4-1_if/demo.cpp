#include <iostream>

using namespace std;

int a = 1023;
bool flag = false;
char letter = 'f';

int main() {
    if (a > 1000)
        cout << "a is over 1000!" << endl;

    if (a%2)
        cout << "a is odd" << endl;
    else
        cout << "a is even" << endl;


    return 0;
}