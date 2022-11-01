#include <iostream>
#include <string>
#include "cow.h"

using namespace std;


int main() {
	cow my_cow("Hank", 7, pet);
	//my_cow.age = 5;
	//my_cow.name = "Gary";
	//my_cow.purpose = meat;

	cout << my_cow.get_name() << " is a type " << (int)my_cow.get_purpose() << " cow." << endl;
	cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
	
	return (0);
}
