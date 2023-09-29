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
    int get_day(){
            return day;
    }
    void set_day(int date){
this->day=date;
    }
     int get_month(){
            return month;
    }
    void set_month(int month){
this->month=month;
    }
     int get_year(){
            return year;
    }
    void set_year(int date){
this->year=year;
    }
    
    void displaydate()
    {
        cout << day << "-" << month << "-" << year << endl;
    }
    bool is_leap_year(){
        if (year%4==0 || year%400)
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
person(){}
person(string*,string*,Date d2){}

    void acceptperson()
    {
        cout << "please enter details of person:" << endl;
        cout << "ENTER NAME:" << endl;

        cin >> this->name;
        cout << "ENTER ADRESS:" << endl;

        cin >> this->address;
        cout << "ENTER DATE OF BIRTH:" << endl;

        birth_date.acceptdate();
    }
    void displayperson()
    {
        cout << "THE NAME IS : " << name << endl;
        cout << "THE ADDRESS IS : " << address << endl;
        cout<< "THE DATE OF BIRTH IS:"<<endl;
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
class employee
{
private:
    int id;
    float sal;
    string dept;
    Date joining_date;

    person p;

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
        p.acceptperson();
        cout << "ENTER EMPLOYEE ID :" << endl;
        cin >> this->id;
        cout << "ENTER SALARY :" << endl;
        cin >> this->sal;
        cout << "ENTER DEPARRTMENT :" << endl;
        cin>>this->dept;
        cout<<"ENTER JOINING DATE:"<<endl;
        joining_date.acceptdate();


    }
    void display()
    {
        cout <<"================================COMPLETE DETAILS OF EMPLOYEE======================================"<<endl;
        p.displayperson();
        cout<<"THE ID OF EMPLOYEE IS :"<<this->id<<endl;
        cout<<" SALARY IS :"<<this->sal<<endl;
        cout<<" DEPARTMENT IS: "<<this->dept<<endl;
        cout<<"THE JOINING DATE IS:"<<endl;
        
        joining_date.displaydate();


    }
};

int main()
{
    employee E1;
    E1.accept_employee();
    E1.display();

}