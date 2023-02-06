#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers = {12,25,31,47,58};
float average;

int main() {
    average = 0.0f;

    for(int i=0; i<numbers.size(); i++)     // you don't need curly brackets if you only need 1 line
        average += numbers[i];
    average /= numbers.size();
    cout << "Average: " << average << endl;

    average = 0.0f;
    for(auto x : numbers)       // "For each x in numbers"
        average += x;
    average /= numbers.size();
    cout << "Average: " << average << endl;

    return(0);
}