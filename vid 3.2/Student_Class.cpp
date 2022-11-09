#include <iostream>
using namespace std;

class Student
{
    public:
        string name;
        unsigned int id;
        float gpa;

        Student()
        {
            name = "Empty";
            id = 0;
            gpa = 0;
        }
        Student(string studentName, unsigned int studentID, float studentGPA)
        {
            name = studentName;
            id = studentID;
            gpa = studentGPA; 
        }
        Student(string studentName, unsigned int studentID, char studentGrades[])
        {
            name = studentName;
            id = studentID;
            gpa = calculateGPA(studentGrades);
        }

        float calculateGPA(char studentGrades[])
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
        void Identify()
        {
            cout << "Student ID: " << id << "\nNamed: " << name << "\nhas a GPA of: " << gpa << endl;
        }
};




int main()
{
    char arr[5] = {'A','A','C','B','F'};

    Student debil;
    Student kot ("Jezus", 2137, 3.33f);
    Student kocur("Kon", 123, arr);

    debil.Identify();
    kot.Identify();
    kocur.Identify();

    int a;
    cin>>a;
    return 0;
}