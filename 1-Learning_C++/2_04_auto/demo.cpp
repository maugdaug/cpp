#include <iostream>
#include <typeinfo>

#define DEBUG

using namespace std;

auto a = 8;
auto b = 12345678901;
auto c = 3.14f;
auto d = 3.14;
auto e = true;
auto f = 'd';

int main() {
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;

#ifdef DEBUG
	cout << "Let's do some debugging here!" << endl;
#endif

	cout << typeid(d).name() << endl;
	cout << typeid(e).name() << endl;
	cout << typeid(f).name() << endl;
	return (0);
}
