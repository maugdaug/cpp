#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ifstream inFile;
string str1, str2, str3;
int number;
char letter;

int main() {
    inFile.open("people.txt");
    if(inFile.fail())
        cout << "File not found!" << endl;
    else {
        while(!inFile.eof()) {
            getline(inFile, str1);
            cout << str1 << ", ";
            getline(inFile,str2);
            number = stoi(str2);
            cout << number << ", ";
            getline(inFile, str3);
            letter = str3[0];
            cout << letter << endl;
        }
        inFile.close();
    }
    return (0);
}