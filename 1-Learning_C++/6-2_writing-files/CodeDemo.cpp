#include <fstream>
# include <iostream>

using namespace std;

ofstream outFile;
float a = 4.333f, b = 5.302f;

int main() {
    outFile.open("calculations.txt");
    if(outFile.fail())
        cout << "Couldn't open file!" << endl;
    else {
        outFile << "a = " << a << endl;
        outFile << "b = " << b << endl;
        outFile << "a + b = " << a + b << endl;
        outFile << "a * b = " << a * b << endl;
        outFile.close();
        cout << "File written successfully!" << endl;   
    }
    return 0;
}