#include <iostream>
using namespace std;
class Cylinder
{

    double radius;
    double height;
    double volume;

public:
    Cylinder()
    {
        this->radius = 0;
        this->height = 0;
    };
    Cylinder(double radius, double height)
    {
        this->radius = radius;
        this->height = height;
    }
    double getRadius()
    {
        return radius;
    }
    void setRadius(double radius)
    {
        cout << "setting radius" << endl;
        this->radius = radius;
    }
    double getHeight()
    {
        return height;
    }
    void setHeight(double height)
    {
        cout << "setting height" << endl;
        this->height = height;
    }
    double getVolume()
    {
        return volume;
    }
    void printVolume()
    {
        volume = 3.14 * radius * radius * height;
        cout << "VOLUME IS:" << volume << endl;
    }
    void menu()
    {
        cout << "-----------------------------------------welcome to volume calculator--------------------------------------------" << endl;
        cout << "####  MENU   #####" << endl
             << "0. EXIT" << endl
             << "1. TO PRINT VOLUME" << endl
             << "2. TO ADD RADIUS" << endl;
        cout << "3. TO ADD HEIGHT" << endl;
        int choice;
        cin >> choice;
        while (choice != 0)
        {
            cin >> choice;
            switch (choice)
            {
            case 1:
                printVolume();
                break;

            case 2:
                cout << "please enter radius:" << endl;
                cin >> radius;
                break;1

            case 3:
                cout << "please enter height:" << endl;
                cin >> height;

                break;

            default:
                cout << "*********YOU FIRED WRONG KEY*************" << endl;
                choice = 0;
                break;
            }
        }
    }
};
int main()
{
    Cylinder v1;
    v1.menu();
}