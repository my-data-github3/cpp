#include <iostream>
#include <string>
using namespace std;

class Date
{
    int day, month, year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int date, int month, int year)
    {
        this->day = date;
        this->month = month;
        this->year = year;
    }
    void acceptdate()
    {
        cout << "ENTER DATE:" << endl;
        cin >> this->day;
        cout << "ENTER MONTH:" << endl;
        cin >> this->month;
        cout << "ENTER YEAR:" << endl;
        cin >> this->year;
    }
    int get_day()
    {
        return day;
    }
    void set_day(int date)
    {
        this->day = date;
    }
    int get_month()
    {
        return month;
    }
    void set_month(int month)
    {
        this->month = month;
    }
    int get_year()
    {
        return year;
    }
    void set_year(int date)
    {
        this->year = year;
    }

    void displaydate()
    {
        cout << day << "-" << month << "-" << year << endl;
    }
    bool is_leap_year()
    {
        if (year % 4 == 0 || year % 400)
            return 1;

        return 0;
    }
};
class person
{
    string name;
    string address;
    Date birth_date;

public:
    person() {}
    person(string *, string *, Date) {}

    void acceptperson()
    {cout<<"==============================================================================="<<endl;
        cout << "please enter details of person:" << endl;
        cout << "ENTER NAME:" << endl;
        getline(cin, name);

        cout << "ENTER ADRESS:" << endl;
        getline(cin, address);
        
        cout << "ENTER DATE OF BIRTH:" << endl;

        birth_date.acceptdate();
    }
    void displayperson()
    {cout<<".........................................................................................................."<<endl;
        cout << "THE NAME IS : " << name << endl;
        cout << "THE ADDRESS IS : " << address << endl;
        cout << "THE DATE OF BIRTH IS:" << endl;
        birth_date.displaydate();
    }
    string get_name()
    {
        return this->name;
    }
    void set_name(string n)
    {
        this->name = n;
    }
    string get_address()
    {
        return this->address;
    }
    void set_address(string n)
    {
        this->address = n;
    }
    Date get_date()
    {
        return this->birth_date;
    }
    void set_name(Date d)
    {
        this->birth_date = d;
    }
};
class employee : public person
{
private:
    int id;
    float sal;
    string dept;
    Date joining_date;

public:
    employee()
    {
        this->id = 0;
        this->sal = 0.0;
        this->dept = " ";
    }
    void accept_employee()
    {
        cout << "--------------------ENTER PERSONAL DETAILS------------------------" << endl;
        acceptperson();
        cout << "ENTER EMPLOYEE ID :" << endl;
        cin >> this->id;
        cout << "ENTER SALARY :" << endl;
        cin >> this->sal;
        cout << "ENTER DEPARRTMENT :" << endl;
        cin >> this->dept;
        cout << "ENTER JOINING DATE:" << endl;
        joining_date.acceptdate();
    }
    void display_employee()
    {
        person::displayperson();
        cout << "-------------------- PERSONAL DETAILS------------------------" << endl;
        cout << "EMPLOYEE ID :" << id << endl;

        cout << "SALARY :" << sal << endl;

        cout << "DEPARRTMENT :" << dept << endl;

        cout << "JOINING DATE:";
        joining_date.displaydate();
    }
};
int main()
{
    employee e1;
    e1.accept_employee();
    e1.display_employee();
}
