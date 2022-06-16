/* Create one application which implement all type of Hierarchical inheritance*/


#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
public:
    string id, mobile_no, email;
    char name[20];

    void getdata()
    {

        cout << "Enter the Student Name: ";
        cin >> name;
        cout << "Enter the Student Mobile no: ";
        cin >> mobile_no;
        cout << "Enter the Email ID: ";
        cin >> email;
        cout << endl;
    }
    void putdata()
    {
        cout << "Student Name " << name << endl;
        cout << "Student Mobile no: " << mobile_no << endl;
        cout << "Email ID: " << email << endl;
    }
};

class Education : public Student
{
public:
    char school_name[30];
    char board_name[4];
    int percentage;

    void gtdata()
    {

        cout << "Enter the Board (GSEB/CBSE): ";
        cin >> board_name;
        cout << "Enter Your Percentage: ";
        cin >> percentage;
    }
    void ptdata()
    {
        cout << "Board Name: " << board_name << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

class Location : public Student
{
public:
    string state, district;

    void gdata()
    {
        cout << "Enter the State: ";
        cin >> state;
        cout << "Enter the District: ";
        cin >> district;
    }
    void pdata()
    {
        cout << "State: " << state << endl;
        cout << "District: " << district << endl;
    }
};

int main()
{

    Student s;
    Education e;
    Location l;
    s.getdata();
    e.gtdata();
    l.gdata();

    cout << "__________Student Details for Admission__________" << endl;

    s.putdata();
    e.ptdata();
    l.pdata();

    return 0;
}
