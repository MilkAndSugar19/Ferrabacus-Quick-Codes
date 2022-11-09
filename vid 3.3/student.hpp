#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

class Student
{
    public:
        std::string name;
        unsigned int id;
        float gpa;
        Student();
        Student(std::string studentName, unsigned int studentID, float studentGPA);
        Student(std::string studentName, unsigned int studentID, char studentGrades[]);
        float calculateGPA(char studentGrades[]);
        void Identify();

};



#endif