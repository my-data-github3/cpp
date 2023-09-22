#include <iostream>
#include<string>
using namespace std;
class student{

int roll;
string name;
float marks;
public:

 void initstudent(){
    
    roll= 80125;
    name = "PIYUSH SAHU";
    marks = 85.98;
    
}
void printStudentOnConsole(){
    cout<<"THE NAME IS:\t"<<name<<endl;
    cout<<"THE ROLL IS:\t"<<roll<<endl;
    cout<<"THE MARKS IS:\t"<<marks<<endl;

}
void acceptStudentFromConsole(){
    cout<<"ENTER NAME,ROLL,MARKS:"<<endl;
    cin>>name>>roll>>marks;

}
};

int main(){
    student piyush;
    piyush.initstudent();
    piyush.printStudentOnConsole();
    piyush.acceptStudentFromConsole();
    piyush.printStudentOnConsole();
}