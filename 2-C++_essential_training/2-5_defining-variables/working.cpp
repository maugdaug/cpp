#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    int i {};       // This is the "modern" way to initialize variables. More efficiant + better type chacking
    auto j = 147;

    cout << format("i is {}\n", i);

    i = 69;

    cout << format("i is {}\n", i);
}