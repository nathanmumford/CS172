#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
    Course course1("Data Structures", 10);
    Course course2("Database Systems", 15);
    //add students to course1
    course1.addStudent("Peter Jones");
    course1.addStudent("Brian Smith");
    course1.addStudent("Anne Kennedy");
    //add students to course2
    course2.addStudent("Peter Jones");
    course2.addStudent("Steve Smith");
    string* students = course1.getStudents();
    //drop a student
    cout << "Drop Peter Jones from class: " << endl;
    course1.dropStudent("Peter Jones"); //drop Peter Jones from class
    for(int i = 0; i < course1.getNumberOfStudent(); i++)
    {
        cout << students[i] << endl;
    }
    
    
    
    return 0;
}