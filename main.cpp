#include <iostream>
#include <string>
#include <student.h>
#include <roster.h>

int main() {

	std::cout << "C867-Scripting & Programming: Applications" << endl;
	std::cout << "Language: C++" << endl;
	std::cout << "Student ID: 011327408" << endl;
	std::cout << "Name: Jonathan Guzman" << endl;

	const std::string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Jonathan,GUzman,jguz219@wgu.edu,32,30,35,40,SOFTWARE"
	}
	return;

	classRoster.parse();

	classRoster.add();

	classRoster.printAll();

	classRoster.printInvalidEmails();

	classRoster.printAverageDaysInCourse();

	classRoster.printByDegreeProgram(SOFTWARE);

	classRoster.remove("A3");

	classRoster.printAll();

	classRoster.remove("A3");


};