#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers = {12,25,31,47,58};

int main() {
    vector<int>::iterator ptr = numbers.begin();    // iterator declaration and initialization
    // auto ptr = numbers.begin();    // this also works somehow 


    while (ptr != numbers.end()) {
        cout << *ptr << " ";
        ptr = next(ptr, 1);
    }
    cout << endl;


    // this does the same thing in a different way
    int i = 0;
    do{
        cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size());
    cout << endl;


    return (0);
}