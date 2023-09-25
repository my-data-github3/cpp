#include<iostream>
using namespace std;
class tollbooth{
    unsigned cars;
 double amount;
 public:
tollbooth(unsigned cars,double amount){
    this->cars=cars;
    this->amount=amount;
}
void payingCar(){
    cars++;
    amount=amount+0.5;

}
void nocarpaying(){
    cars++;
}
void printonconsole(){
    cout <<"===== THE NUMBERS OF CARS PASSED ARE ========>"<<cars<<endl;
    cout<<"===== THE AMOUNT COLLECTED IS =======>"<<amount<<endl;
}
void menu(){
    cout<<"-----------------------------------------welcome to tollbooth records--------------------------------------------"<<endl;
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
    tollbooth t1(0,0);
    t1.menu();
    return 99;

}
