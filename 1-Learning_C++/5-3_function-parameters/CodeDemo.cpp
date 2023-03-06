#include <iostream>

using namespace std;

// Takes argument as a value
int square(int x){
    x = x * x;
    return x;
}

// takes argument by address
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// takes argument by reference (overloaded)
void swap(int& x, int&y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 9, b;

    b = square(a);
    cout << "a = " << a << ", b = " << b << endl;

    swap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;

    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    return (0);
}