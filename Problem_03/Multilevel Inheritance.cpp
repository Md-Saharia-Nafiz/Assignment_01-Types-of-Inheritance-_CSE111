#include <iostream>
using namespace std;

// Base class
class Student
{
protected:
    string name;  // Data member for student's name
public:
    // Constructor
    Student()
    {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Student constructor called." << endl;
    }

    // Display function
    void displayStudent()
    {
        cout << "Student Name: " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Student destructor called." << endl;
    }
};

// Derived class from Student
class Exam : public Student
{
protected:
    int marks;  // Data member for exam marks
public:
    // Constructor
    Exam()
    {
        cout << "Enter exam marks: ";
        cin >> marks;
        cout << "Exam constructor called." << endl;
    }

    // Display function
    void displayExam()
    {
        cout << "Exam Marks: " << marks << endl;
    }

    // Destructor
    ~Exam()
    {
        cout << "Exam destructor called." << endl;
    }
};

// Derived class from Exam
class Result : public Exam
{
protected:
    string grade;  // Data member for result grade
public:
    // Constructor
    Result()
    {
        cout << "Enter grade: ";
        cin >> grade;
        cout << "Result constructor called." << endl;
    }

    // Display function
    void displayResult()
    {
        cout << "Grade: " << grade << endl;
    }

    // Destructor
    ~Result()
    {
        cout << "Result destructor called." << endl;
    }
};

int main()
{
    // Create a Result object
    Result r;

    cout << "\nDisplaying all data:\n";
    r.displayStudent();  // Display student info
    r.displayExam();     // Display exam info
    r.displayResult();   // Display result info

    return 0;
}

