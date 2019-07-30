#include<iostream>
#include<string>
using namespace std;
float mult(float num1,float num2);
float add(float num1,float num2);
float sub(float num1,float num2);
float divide(float num2,float num2);
int main()
{
    int choice;
    float num1,num2;
    cout<<"---------------------------------------------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"  ---------Derrick's CALCULATOR!!!!!-----"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"	Make a selction:"<<endl;
    cout<<"	1.Division"<<endl;
    cout<<"	2.Adding"<<endl;
    cout<<"	3.Subtraction"<<endl;
    cout<<"	4.multiplication"<<endl;
    cout<<"
YOUR CHIOCE IS: ";
    cin>>choice;
    switch(choice){
                   case 1:
                        cout<<"Please enter the two numbers you want to
divide, divisor first!: ";
                        cin>>num1>> num2;
                        cin.ignore();

cout<<"
"<<num1<<"/"<<num2<<"="<<divide(num1,num2)<<endl;
                        break;
                              case 2:
                                   cout<<"Please enter the two numbers
you
want to add: ";
                                   cin>>num1>> num2;
                                   cin.ignore();

cout<<"
"<<num1<<"+"<<num2<<"="<<add(num1,num2)<<endl;
                                    break;
                                           case 3:
                                                 cout<<"Please enter
the
two numbers you want to subtract, The number you want to subtract from
first!: ";
                                                 cin>>num1>> num2;
                                                 cin.ignore();

cout<<"
"<<num1<<"-"<<num2<<"="<<sub(num1,num2)<<endl;
                                                 break;
                                                       case 4:

cout<<"Please
enter the two numbers you want to multiply: ";

cin>>num1>>
num2;

cin.ignore();

cout<<"
"<<num1<<"*"<<num2<<"="<<mult(num1,num2)<<endl;
                                                              break;

default:

cout<<"Invalid Entry!, BYE!!!"<<endl;

cin.ignore();

break;

        }
                                cin.ignore();
                                return 0;
}
float mult(float num1,float num2){
    return (num1*num2);
}
float add(float num1,float num2){
    return (num1+num2);
}
float sub(float num1,float num2){
    return (num1-num2);
}
float divide(float num1,float num2){
    return (num1/num2);
}

