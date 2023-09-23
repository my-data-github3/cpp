#include <iostream>
#include <string>
using namespace std;
class address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    address()
    {
        cout << "you are in default constructor" << endl;
    }
    address(string building, string street, string city, int pin)
    {
        cout << "in constructor" << endl;
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
        cout<<building<<endl<<street<<endl<<city<<endl<<pin;
        cout << "leaving constructor" << endl;
    }
    void setters(int pin)
    {
        this->pin = pin;
    }
    int getters()
    {
        return pin;
    }
    void accepts()
    {
        cout << "Enter building,street,city,pin:" << endl;
        cin >> building >> street >> city >> pin;
    }
    void display()
    {
        cout << "building is:" << building << endl;
        cout << "building is:" << street << endl;
        cout << "building is:" << city << endl;
        cout << "building is:" << pin << endl;
    }
};

int main()
{

    address a1("Galaxy", "Bandra", "mumbai", 13126);
    //a1.setters(12222);
   // cout << "the values of new pin is:" << a1.getters();
    a1.accepts();
    a1.display();
    return 99;
}