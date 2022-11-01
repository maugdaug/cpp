#include <iostream>
#include <string>

using namespace std;

enum cow_purpose {meat, dairy, hide, pet};

struct cow{
	string name;
	int age;
	unsigned char purpose;
};

int main() {
	cow my_cow;
	my_cow.age = 5;
	my_cow.name = "Gary";
	my_cow.purpose = meat;

	cout << my_cow.name << " is a type " << (int)my_cow.purpose << " cow." << endl;
	return (0);
}
