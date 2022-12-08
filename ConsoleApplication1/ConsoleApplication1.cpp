// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

struct Employee
{
    string name;
    short id;
    double salary;
    int age;
};

void printInformation(Employee a)
{
    cout << "Name: " << a.name << "\n";
    cout << "ID: " << a.id << "\n";
    cout << "Age: " << a.age << "\n";
    cout << "Salary: " << a.salary << "\n";
}
int main()
{
    Employee a;
    cout << "Enter the name of employee\n";
    cin >> a.name;
    cout << "Enter the age of employee\n";
    cin >> a.age;
    cout << "Enter ID of employee\n";
    cin >> a.id;
    cout << "Enter salary of employee\n";
    cin >> a.salary;

    printInformation(a);

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
