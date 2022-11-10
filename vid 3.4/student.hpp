#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>
#include <vector>

class Student
{
    public:
        static std::vector<std::string> classes;
        void setName(std::string givenName);
        void setID(unsigned int givenID);
        void setGPA(double givenGPA);
        void set_class_schedule();


        std::string getName();
        unsigned int getID();
        double getGPA();
        void print_class_schedule();

        Student();
        Student(std::string studentName, unsigned int studentID, double studentGPA);
        Student(std::string studentName, unsigned int studentID, char studentGrades[]);
        double calculateGPA(char studentGrades[]);
        void Identify();
        //std::vector<std::string> get_classes_to_choose();

    private:   
        std::string name;
        std::vector<std::string> class_schedule;
        unsigned int id;
        double gpa;
};

#endif