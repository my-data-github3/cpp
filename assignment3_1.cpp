#include <iostream>
using namespace std;
class volume
{
    int length, breadth, height;

public:
    volume()
    {
    }
    /* volume(int a , int b , int c )
     {
         this->length = a;
         this->breadth = b;
         this->height = c;
     }*/
    void defaultval()
    {
        length = 12;
        breadth = 35;
        height = 40;
    }
    void set()
    {
        cout << "PLEASE ENTER LENGTH :" << endl;
        cin >> length;
        cout << "PLEASE ENTER BREADTH :" << endl;
        cin >> breadth;
        cout << "PLEASE ENTER HEIGHT :" << endl;
        cin >> height;
    }

    void calculate()
    {
        cout << "THE VOLUME OF BOX IS:" << length * breadth * height << endl;
    }
    void menu()
    {
        int choice;
        cout << "#####################################################################################################" << endl;
        cout << "------------------------------------MENU FOR VOLUME CALCULATOR---------------------------------------" << endl;
        cout << "0. EXIT" << endl
             << "1. ENTER [LENGTH]   [WIDTH]   [HEIGHT]    MANUALLY" << endl
             << "2. CHOOSE BY DEFAULT VALUE WHICH IS SET BY MR. PIYUSH SAHU" << endl;
        cout << "========================================================================================================" << endl;
        cin >> choice;
        while (choice != 0)
        {
            switch (choice)
            {
            // case 0:
            //    break;
            case 1:
                set();
                calculate();
                break;
            case 2:
                defaultval();
                calculate();
                choice = 0;
                break;

            default:
                cout << "_______________________________________you entered wrong input_____________________________________" << endl;
                break;
            }
        }
    }
};
int main()
{
    volume v1;
    v1.menu();

    return 0;
}
