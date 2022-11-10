#include <iostream>
#include "student.hpp"

using namespace std;

int main()
{
    Student s1;
    Student s2 ("Winston Smith", 12, 3.14f);

    s1.Identify();
    s2.Identify();

    s2.set_class_schedule();
    s2.print_class_schedule();

    return 0;
}