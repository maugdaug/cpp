// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

using namespace std;

vector<Student> students = {Student(1,"George P. Burdell"),
							Student(2,"Nancy Rhodes")};

vector<Course> courses = {Course(1,"Algebra",5),
						  Course(2,"Physics",4),
						  Course(3,"English",3),
						  Course(4,"Economics",4)};

vector<Grade> grades = {Grade(1,1,'B'),	Grade(1,2,'A'),	Grade(1,3,'C'),
						Grade(2,1,'A'),	Grade(2,2,'A'), Grade(2,4,'B')};

float GPA = 0.0f;
int id;

float numerator = 0.0f;
float denominator = 0.0f;
float multiplier;

int main(){
	cout << "Enter a student ID: ";
	cin >> id;

	// Calculate the GPA for the selected student.
	// Write your code here

	float points = 0.0f, credits = 0.0f;
	for (Grade& grd : grades)				// grd is a reference to the current element in of grades vector
		if (grd.get_student_id() == id) {
			float num_grd;
			switch (grd.get_grade()) {
			case 'A': num_grd = 4.0f;
				break;
			case 'B': num_grd = 3.0f;
				break;
			case 'C': num_grd = 2.0f;
				break;
			case 'D': num_grd = 1.0f;
				break;
			case 'F': num_grd = 0.0f;
				break;
			};

			int j=0;
		}

	// for (int i=0; i<grades.size(); i++) {
	// 	if (grades[i].get_student_id() == id) {
	// 		cout << "Grade: " << grades[i].get_course_id() << endl;
	// 		switch(grades[i].get_grade()) {
	// 		case 'A':
	// 			multiplier = 4.0f;
	// 			break;
	// 		case 'B':
	// 			multiplier = 3.0f;
	// 			break;
	// 		case 'C':
	// 			multiplier = 2.0f;
	// 			break;
	// 		case 'D':
	// 			multiplier = 1.0f;
	// 			break;
	// 		case 'F':
	// 			multiplier = 0.0f;
	// 			break;
	// 		}

	// 		denominator += courses[grades[i+1].get_course_id()].get_credits();
	// 		numerator += courses[grades[i+1].get_course_id()].get_credits() * 4;
			
	// 	}
	// }
	// GPA = numerator / denominator;

	// for (int i=0; i<grades.size(); i++) {
	// 	cout << "Grade: " << grades[i].get_course_id() << endl;
	// 	cout << "Student: " << grades[i].get_student_id() << endl;
	// 	cout << "Grade: " << grades[i].get_grade() << endl;
	// }

	string student_str;
	student_str = students[id].get_name(); // Change this to the selected student's name

	cout << "The GPA for " << student_str << " is " << GPA << endl;
	return (0);
}




