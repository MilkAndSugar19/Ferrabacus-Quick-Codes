#include "student.hpp"
#include <iostream>

Student::Student()
{
    name = "Empty";
    id = 0;
    gpa = 0;
}
Student::Student(std::string studentName, unsigned int studentID, float studentGPA)
{
    name = studentName;
    id = studentID;
    gpa = studentGPA; 
}
Student::Student(std::string studentName, unsigned int studentID, char studentGrades[])
{
    name = studentName;
    id = studentID;
    gpa = calculateGPA(studentGrades);
}
float Student::calculateGPA(char studentGrades[])
{
            float gpa=0;
            int arrSize = sizeof(studentGrades) / sizeof(char);
            for(int i=0; i<arrSize; i++)
            {
                switch(studentGrades[i])
                {
                    case 'A':
                        gpa += 4;
                        break;
                    case 'B':
                        gpa += 3;
                        break;
                    case 'C':
                        gpa += 2;
                        break;
                    case 'D':
                        gpa += 1;
                        break;
                    default:
                        break;
                }
            }
            return (gpa /= arrSize);
        }
void Student::Identify()
{
    std::cout << "Student ID: " << id << "\nNamed: " << name << "\nhas a GPA of: " << gpa << '\n';
}