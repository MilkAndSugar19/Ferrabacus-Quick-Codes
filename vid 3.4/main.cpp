#include <iostream>
#include "student.hpp"

using namespace std;

int main()
{
    char arr[7] = {'A', 'A', 'A', 'A', 'A', 'D', 'D'};
    Student s1;
    Student s2 ("Winston Smith", 12, arr);

    s1.setName("Goldstein"); s1.setGPA(1.2313f); s1.setID(420420);


    s1.set_class_schedule();
    s2.set_class_schedule();

    s1.Identify();
    s2.Identify();

    return 0;
}