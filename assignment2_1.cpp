#include <iostream>
#include <string>
using namespace std;

namespace Nstudent{
class student
{
    int roll;
    string name;
    float marks;

public:
    void initstudent()
    {
        roll = 80125;
        name = "PIYUSH SAHU";
        marks = 85.98;
    }

    void printStudentOnConsole()
    {
        cout << "THE ROLL IS:\t" << roll << endl;
        cout << "THE NAME IS:\t" << name << endl;
        cout << "THE MARKS IS:\t" << marks << endl;
    }

    void acceptStudentFromConsole()
    {
        cout << "ENTER NAME, ROLL, MARKS:" << endl;
        cin >> name >> roll >> marks;
    }
};
}
int main()
{
    Nstudent::student piyush;
    int input;
    
    cout << "------------menu--------------" << endl;
    cout << "Enter your choice:" << endl;
    cout << "0. Exit" << endl;
    cout << "1. To enter student details" << endl;
    cout << "2. To display student details" << endl;

    cin >> input;

    while (input != 0)
    {
        switch (input)
        {
        case 1:
            piyush.acceptStudentFromConsole();
            break;
        case 2:
        piyush.initstudent();
            piyush.printStudentOnConsole();
            break;
        default:
            cout << "You have entered a wrong choice" << endl;
            break;
        }

        // Ask for input again
        cout << "Enter your choice:" << endl;
        cout << "0. Exit" << endl;
        cout << "1. To enter student details" << endl;
        cout << "2. To display student details" << endl;

        cin >> input;
    }

    return 0;
}
