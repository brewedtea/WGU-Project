#include "student.h"
#include <iostream>
#include "student.h"


class Student
{

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
    
    //Constructor
    Student::Student(string studentID, string first_name, string last_name, string email_address, int age, int daysOne, int daysTwo, int daysThree, DegreeProgram degree_program)
    {
        this->studentID = studentID;
        this->first_name = first_name;
        this->last_name = last_name;
        this->email_address = email_address;
        this->age = age;
        this->days[0] = daysOne;
        this->days[1] = daysTwo;
        this->days[2] = daysThree;
        this->degree_program = degree_program;
        }
        
    //setters definitions
    void Student::setStudentID(string studentID) 
    {
        this->studentID = studentID;

        return;
    }

    void Student::setFirst_name(string first_name) 
    {
        this->first_name = first_name;

        return;
    }
    void Student::setLast_name(string last_name)
    {
        this->last_name = last_name;

        return;
    }
    void Student::setEmail_address(string email_address)
    {
        this->email_address = email_address;

        return;
    }
    void Student::setAge(int age)
    {
        this->age = age;

        return;
    }
    void Student::setDays(int daysOne, int daysTwo, int daysThree)
    {
        this->days[0] = daysOne;
        this->days[1] = daysTwo;
        this->days[2] = daysThree;

        return;
    }
    void Student::setDegree_Program(DegreeProgram degree_program)
    {
        this->last_name = last_name;

        return;
    }


    //getters definitions
    string Student::getStudentID()
    {
        return studentID;
    }

    string Student::getFirst_name()
    {
        return first_name;
    }

    string Student::getLast_name()
    {
        return last_name;
    }

    string Student::getEmail_address()
    {
        return email_address;
    }

    int Student::getAge()
    {
        return age;
    }

    int Student::getDaysOne()
    {
        return days[0];
    }

    int Student::getDaysTwo()
    {
        return days[1];
    }

    int Student::getDaysThree()
    {
        return days[2];
    }

    DegreeProgram Student::getDegree_program()
    {
        return degree_program;
    }

    //print
    void Student::print()
    {
        return;
    }

};