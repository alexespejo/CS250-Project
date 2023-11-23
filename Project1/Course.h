#pragma once
/*
	Esepjo Alexander
	Chen Quentin
	
	Project: Grade Report
	CS A250
	Fall 2023
*/

#ifndef COURSE_H
#define COURSE_H
#include <string>
class Course {

public:

	Course() : coursePrefix("N/A"), courseNumber(0), courseUnits(0) {}
	Course(const std::string& nCoursePrefix, int nCourseNumber, int nCourseUnits): coursePrefix(nCoursePrefix), courseNumber(nCourseNumber), courseUnits(nCourseUnits) {}
	void setCourseInfo(const std::string& newCoursePrefix, int newCourseNumber, int newCourseUnits);
	std::string getCoursePrefix() const;
	int getCourseNumber() const;
	int getCourseUnits() const;



private:	
	std::string coursePrefix;
	int courseNumber;
	int courseUnits;
};
#endif