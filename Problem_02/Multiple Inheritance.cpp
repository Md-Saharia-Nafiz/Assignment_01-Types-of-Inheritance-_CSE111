#include <iostream>
using namespace std;

// Base class 1
class Student
{
protected:
    string name; // data member for student name
public:
    Student()
    {
        cout << "Student constructor called\n";
    }
    void setStudentData()
    {
        cout << "Enter student name: ";
        cin >> name;
    }
    void displayStudentData()
    {
        cout << "Student Name: " << name << endl;
    }
    ~Student()
    {
        cout << "Student destructor called\n";
    }
};

// Base class 2
class Exam
{
protected:
    int marks; // data member for exam marks
public:
    Exam()
    {
        cout << "Exam constructor called\n";
    }
    void setExamData()
    {
        cout << "Enter exam marks: ";
        cin >> marks;
    }
    void displayExamData()
    {
        cout << "Exam Marks: " << marks << endl;
    }
    ~Exam()
    {
        cout << "Exam destructor called\n";
    }
};

// Derived class using multiple inheritance
class Result : public Student, public Exam
{
protected:
    float grade; // data member for result grade
public:
    Result()
    {
        cout << "Result constructor called\n";
    }
    void setResultData()
    {
        cout << "Enter grade: ";
        cin >> grade;
    }
    void displayResultData()
    {
        cout << "Grade: " << grade << endl;
    }
    ~Result()
    {
        cout << "Result destructor called\n";
    }
};

int main()
{
    // Create a Result object
    Result r;

    // Set data for all classes
    r.setStudentData();   // from Student
    r.setExamData();      // from Exam
    r.setResultData();    // from Result

    cout << "\nDisplaying all data:\n";
    // Display data for all classes
    r.displayStudentData();
    r.displayExamData();
    r.displayResultData();

    return 0;
}

