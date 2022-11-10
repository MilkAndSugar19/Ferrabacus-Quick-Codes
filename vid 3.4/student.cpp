#include "student.hpp"
#include <iostream>
#include <vector>
#include <sstream>
#include <set>

std::vector<std::string> Student::classes {"Chemistry", "Computer Engineering", "Energetics",
                                           "Geoenergetics", " Computer Science",
                                           "Systems Architecture", "Math", "English", 
                                           "Cyber Security", "Electromobility", "Physics", 
                                           "Quantum Engineering", "Applied Mathematics", 
                                           "Applied Computer Science", "Optics", 
                                           "Telecommunication", "Renewable Energy Sources"};

void Student::setName(std:: string givenName)
{
    if(givenName.length() < 2)
    {
        std::cout << "Name is too short!";
        return;
    }
    name = givenName;
}
void Student::setID(unsigned int givenID)
{
    id = givenID;
}
void Student::setGPA(double givenGPA)
{
    if(givenGPA > 4.0f || givenGPA < 0.0f)
    {
        std::cout << "Invalid GPA";
        return;
    }
    gpa = givenGPA;
}
void Student::set_class_schedule()
{
    //print classes that the user can choose
    for(int i=0; i<classes.size(); i++)
    {
        std::cout << '[' << i << ']' << classes[i] << '\n';
    }
    std::cout<<"\n Input the numbers of classes that you want to choose separated by a comma (e.g. 0,4,2,13): ";

    //create a set of indexes to get rid of duplicates and get the user input
    std::set<int> indexes;
    std::string unfiltered_classes;     std::cin >> unfiltered_classes;

    //iterate through the input
    std::stringstream ss(unfiltered_classes);
    while(ss.good())
    {
        //filter numbers by commas ','
        std::string substring;
        std::getline(ss, substring, ',');

        //convert filtered substring to a number
        std::stringstream tss(substring);
        int tmp=0;
        tss >> tmp;

        //put recieved number to a set of indexes
        indexes.insert(tmp);
    } 
    for(auto i : indexes)//set the class schedule
    {
        class_schedule.push_back(classes[i]);
    }


}

std::string Student::getName()
{
    return name;
}
unsigned int Student::getID()
{
    return id;
}
double Student::getGPA()
{
    return gpa;
}
void Student::Identify()
{
    std::cout << "Name: " << getName() <<" ID: " << getID() << " GPA: " << getGPA() << '\n'; 
}
void Student::print_class_schedule()
{
    for(auto i : class_schedule)
    {
        std::cout<<i<<", ";
    }
}

Student::Student()
{
    setName("Empty");
    setID(0);
    setGPA(0.0f);
}
Student::Student(std::string studentName, unsigned int studentID, double studentGPA)
{
    setName(studentName);
    setID(studentID);
    setGPA(studentGPA);
}
Student::Student(std::string studentName, unsigned int studentID, char studentGrades[])
{
    setName(studentName);
    setID(studentID);
    setGPA(calculateGPA(studentGrades));
}
double Student::calculateGPA(char studentGrades[])
{
    double gpa=0;
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