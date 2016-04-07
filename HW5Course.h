#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
using namespace std;

class Course
{
public:
    //prototypes for methods
    Course(const string& courseName, int capacity);
    ~Course();
    string getCourseName() const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudent() const;
    string* increaseCapacity(const string* list, int& size);
    string* decreaseCapacity(const string* list, int& size);
    string* clear();
    Course(const Course& course); //deep copy
private:
    //initialize variable
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};
#endif
