#pragma once

// include guard:
#ifndef COW_H
#define COW_H
#include <string>

// don't use "using namespace std;" in header files

enum cow_purpose {meat, dairy, hide, pet};

class cow{
public:
	cow(std::string name_i, int age_i, unsigned char purpose_i);
	std::string get_name();
	int get_age();
	unsigned char get_purpose();
	void set_age(int new_age);
private:
	std::string name;
	int age;
	unsigned char purpose;
};

#endif // COW_H