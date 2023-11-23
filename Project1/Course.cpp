#include "Course.h"

void Course::setCourseInfo(const std::string& newCoursePrefix, int newCourseNumber, int newCourseUnits) {
	coursePrefix = newCoursePrefix;
	courseNumber = newCourseNumber;
	courseUnits = newCourseUnits;
}
std::string Course::getCoursePrefix() const {
	return coursePrefix;
}
int Course::getCourseNumber() const {
	return courseNumber;
}
int Course::getCourseUnits() const {
	return courseUnits;
}
