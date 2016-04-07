/////////////////////
//The Course class
//Nathan Mumford
//April 6, 2016
//CS172
////////////////////

#include <iostream>
#include "Course.h"
#include <string>
using namespace std;

Course::Course(const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
    
}

Course::~Course()
{
    delete [] students;
}

string Course::getCourseName() const
{
    return courseName;
}

void Course::addStudent(const string& name)
{
    students[numberOfStudents] = name;
    numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
    students[numberOfStudents] = name;
    int flag = 0; //use flag to mark spot
    for(int i = 0; i < numberOfStudents - 1; i++)
    {
        if(students[i] == name)
        {
            flag = i;
        }
    }
    for(int i = flag; i < numberOfStudents - 1; i++)
    {
        students[i] = students[i + 1]; //move the other references over
    }
    decreaseCapacity(students, capacity);//decrease the array size
}

string* Course:: getStudents() const
{
    return students;
}

int Course::getNumberOfStudent() const
{
    return numberOfStudents;
}

string* Course::increaseCapacity(const string* list, int& size)
{
    string* increasecap = new string[size + 1]; //add 1 to the size of the the array
    for(int i = 0; i < size; i++)
    {
        increasecap[i] = list[i];
    }
    size += 1;
    return increasecap;
}

string* Course::decreaseCapacity(const string* list, int& size)
{
    string* decreasecap = new string[size - 1];
    for(int i = 0; i < numberOfStudents - 1; i++)
    {
        decreasecap[i] = list[i];
    }
    numberOfStudents -= 1;
    return decreasecap;
}

string* Course::clear()
{
    delete[] students;//delete the students
    students = new string[capacity];
    return students;
}

Course::Course(const Course& course)//deep copy
{
    courseName = course.courseName;
    numberOfStudents = course.numberOfStudents;
    capacity = course.capacity;
    students = new string[capacity]; //new array
}


