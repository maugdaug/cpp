// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

using namespace std;

void initialize();	// declaration



StudentRecords SR;
int id;

int main(){
	initialize();
	
	cout << "Enter a student ID: ";
	cin >> id;

	// string student_str = SR.get_student_name(id);
	// cout << "The GPA for " << student_str << " is " << SR.get_GPA(id) << endl;

	SR.report_card(id);
	return (0);
}

void initialize() {		// implementation
	SR.add_student(1,"George P. Burdell");
	SR.add_student(2,"Nancy Rhodes");

	SR.add_course(1,"Algebra",5);
	SR.add_course(2,"Physics",4);
	SR.add_course(3,"English",3);
	SR.add_course(4,"Economics",4);

	SR.add_grade(1,1,'B'); 
	SR.add_grade(1,2,'A');	
	SR.add_grade(1,3,'C');
	SR.add_grade(2,1,'A');	
	SR.add_grade(2,2,'A');
	SR.add_grade(2,4,'B');
}