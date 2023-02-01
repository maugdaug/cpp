#include <iostream>
#include <string>
#include "cow.h"

using namespace std;

int a = 37;
int *ptr;

cow *my_cow;

// References:
int my_int = 4;
int& my_ref = my_int;

int main() {
	ptr = &a;

	cout << "           The content of a is " << a << endl;
	cout << "    ptr is pointing to address " << ptr << endl;
	cout << "           The address of a is " << &a << endl;
	cout << "Where ptr is pointing, we have " << *ptr << endl;	//dereference
	cout << "         The address of ptr is " << &ptr << endl;
	cout << endl;

	// cow my_cow("Hank", 7, pet);
	my_cow = new cow("Howard", 3, hide);

	//my_cow.age = 5;
	//my_cow.name = "Gary";
	//my_cow.purpose = meat;

	cout << my_cow->get_name() << " is a type " << (int)my_cow->get_purpose() << " cow." << endl;
	cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << endl;

	delete my_cow; // opposite of "new"
	
	return (0);
}
