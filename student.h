#include <iostream>
#include <string>
#include "degree.h"
using namespace std;


//    D.  For the Student class, do the following:
//	  1.  Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:
//		•  student ID
//		•  first name
//		•   last name
//		•  email address
//		•  age
//		•  array of number of days to complete each course
//		•  degree program
//	2.  Create each of the following functions in the Student class:
//		a.  an accessor (i.e., getter) for each instance variable from part D1
//		b.  a mutator (i.e., setter) for each instance variable from part D1
//		c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
//		d.  constructor using all of the input parameters provided in the table
//		e.  print() to print specific student data

class Student{
    private:

        // Student Variables
        string studentID;
        string first_name;
        string last_name;
        string email_address;
        int age;
        int days[3];
        DegreeProgram degree_program;

    public:

        //print
        void print();

        //setters
        void setStudentID(string studentID);
        void setFirst_name(string first_name);
        void setLast_name(string last_name);
        void setEmail_address(string email_address);
        void setAge(int age);
        void setDays(int daysOne, int daysTwo, int daysThree);
        void setDegree_Program(DegreeProgram degree_program);

        //getters
        string getStudentID();
        string getFirst_name();
        string getLast_name();
        string getEmail_address();
        int getAge();
        int getDaysOne();
        int getDaysTwo();
        int getDaysThree();
        DegreeProgram getDegree_program();

    //constructor
    Student
    (
        string studentID,
        string first_name,
        string last_name,
        string email_address,
        int age,
        int days_remaining[3],
        DegreeProgram degree_program,
        )
};