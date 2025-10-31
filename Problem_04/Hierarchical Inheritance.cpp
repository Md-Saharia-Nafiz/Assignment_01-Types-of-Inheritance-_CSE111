#include <iostream>
using namespace std;

// Base class
class Employee
{
protected:
    string name; // Name of the employee
    int id;      // ID of the employee
public:
    // Function to input employee details
    void inputEmployee()
    {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> id;
    }

    // Function to display employee details
    void displayEmployee()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

// Derived class Manager from Employee
class Manager : public Employee
{
private:
    string department; // Department of the manager
public:
    // Function to input manager details
    void inputManager()
    {
        inputEmployee(); // Call base class function to input name and ID
        cout << "Enter department: ";
        cin >> department;
    }

    // Function to display manager details
    void displayManager()
    {
        displayEmployee(); // Call base class function to display name and ID
        cout << "Department: " << department << endl;
    }
};

// Derived class Engineer from Employee
class Engineer : public Employee
{
private:
    string specialization; // Specialization of the engineer
public:
    // Function to input engineer details
    void inputEngineer()
    {
        inputEmployee(); // Call base class function to input name and ID
        cout << "Enter specialization: ";
        cin >> specialization;
    }

    // Function to display engineer details
    void displayEngineer()
    {
        displayEmployee(); // Call base class function to display name and ID
        cout << "Specialization: " << specialization << endl;
    }
};

int main()
{
    // Create objects for Manager and Engineer
    Manager m;
    Engineer e;

    cout << "Enter details of Manager:" << endl;
    m.inputManager(); // Input manager details

    cout << "\nEnter details of Engineer:" << endl;
    e.inputEngineer(); // Input engineer details

    cout << "\nManager Details:" << endl;
    m.displayManager(); // Display manager details

    cout << "\nEngineer Details:" << endl;
    e.displayEngineer(); // Display engineer details

    return 0;
}
