#include <iostream>
#include <string>
#include "cow.h"
#include <vector>

using namespace std;

vector<int> primes;

int main() {
	cout << "Vector size = " << primes.size() << endl;

	primes.push_back(2);
	primes.push_back(3);
	primes.push_back(5);
	primes.push_back(7);
	primes.push_back(11);

	cout << "Vector size = " << primes.size() << endl;
	cout << "The element at index 2 = " << primes[2] << endl;

	primes[2] = 13;

	cout << "The element at index 2 = " << primes[2] << endl;

	vector<cow> cattle;
	cattle.push_back(cow("Jim", 2, meat));
	cattle.push_back(cow("Tim", 3, hide));
	cattle.push_back(cow("Tom", 4, pet));
	cattle.push_back(cow("Bim", 2, dairy));

	cout << "Cow #1: " << cattle.begin()->get_name() << endl;
	cout << "Cow #2: " << cattle[1].get_name() << endl;
	cout << "Cow #3: " << prev(cattle.end(),2)->get_name() << endl;
	cout << "Cow #4: " << (cattle.end()-1)->get_name() << endl;
	
	return (0);
}
