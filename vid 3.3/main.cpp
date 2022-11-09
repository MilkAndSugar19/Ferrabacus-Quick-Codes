#include "student.hpp"
#include <iostream>

using namespace std;


int main()
{
    char arr[3] = {'A','B','F'};
    Student first;
    Student second ("Kot", 112233, 3.33f);
    Student third ("Kojot", 223344, arr);

    first.Identify(); second.Identify(); third.Identify(); 



    return 0;
}