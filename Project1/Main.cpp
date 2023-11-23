/*
	Espejo, Alexander

	Project: Grade Report
	CS A250
	Fall 2023
*/


#include <iostream>
#include "Course.h"

using namespace std;

int main() {
	Course java("CSA", 170, 4);
	cout << java.getCoursePrefix();
	return 0;
}