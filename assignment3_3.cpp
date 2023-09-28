#include <iostream>
using namespace std;
class Cylinder{

    double radius;
    double height;
    double volume;
public:
Cylinder(){};
Cylinder(double radius, double height){
    this->radius=radius;
    this->height=height;
}
double getRadius(){
    return radius;
}
void setRadius(double radius){
    this->radius=radius;
}
double getHeight(){
    return height;
}
void setHeight(double height){
    this->height=height;
}
double getVolume(){
    return volume;
}
void printVolume(){
    cout<<"VOLUME IS:"<<3.14*radius*radius*height<<endl;
}
void menu(){
    cout<<"-----------------------------------------welcome to volume calculator--------------------------------------------"<<endl;
    cout<<"####  MENU   #####"<<endl<<"0. EXIT"<<endl<<"1. TO ADD CAR WHO GAVE MONEY"<<endl<<"2. TO ADD CARS WHO DIDN'T PAY MONEY"<<endl;
    cout<<"3. TO CHECK THE RECORD"<<endl;
    int choice;
    cin>>choice;
    while(choice){
        cin>>choice;
        switch(choice){
            case 1: payingCar();
            
            break;
            case 2: nocarpaying();
            
            break;
            case 3: printonconsole();
        
            break;
            default:
            cout<<"*********YOU ENTERED WRONG KEY*************"<<endl;
            choice=0;
            break;


        }
    }

}
};
int main(){
    cylinder v1;
    v1.menu;
}