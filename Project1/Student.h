/*
	Esepjo Alexander
	Chen Quentin

	Project: Grade Report
	CS A250
	Fall 2023
*/

#include "Course.h"
#include <string>
#include <map>

class Student {

public:
	Student(int newStudentId, const std::string newFirstName, const std::string newLastName, int newNumOfCourses, bool newTuitionWasPaid, std::multimap<Course, char> newCoursesTaken) :
		studentID(newStudentId), firstName(newFirstName), lastName(newLastName), numberOfCourses(newNumOfCourses), tuitionWasPaid(newTuitionWasPaid), coursesCompleted(newCoursesTaken) {}

private:
	int studentID;
	std::string firstName;
	std::string lastName;
	int numberOfCourses;
	bool tuitionWasPaid;
	std::multimap<Course, char> coursesCompleted;
};