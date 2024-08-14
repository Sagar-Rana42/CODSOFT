/*            TASK 2: SIMPLE CALCULATOR
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/


#include<iostream>
using namespace std;

void calculator(){

    // HERE SWITCH STATEMENT CAN BE USED 

    cout<<"Enter first number (Number should be integer type ) "<<endl;
    int num1;
    cin>>num1;
    cout<<"Enter second number (Number should be integer type ) "<<endl;
    int num2;
    cin>>num2;
    cout<<endl;

    cout<<"Which type of arithmetic operation you want to perform  "<<endl<<endl;
    cout<<"For Addition press 1 "<<endl;
    cout<<"For Subtraction press 2 "<<endl;
    cout<<"For Multiplication press 3 "<<endl;
    cout<<"For Division press 4 "<<endl;
    int operation;
    cin>>operation;


    if(operation == 1){
        cout<<"Addition of "<<num1<<" and " <<num2<<" is "<<num1+num2<<endl; 
    }
    else if(operation == 2){
        cout<<"Subtraction of "<<num1<<" and " <<num2<<" is "<<num1-num2<<endl; 
    }
    else if(operation == 3){
        cout<<"Multiplication of "<<num1<<" and " <<num2<<" is "<<num1*num2<<endl; 
    }
    else if(operation == 4){
        if(num2 == 0){
            cout<<"Can't divide by 0 "<<endl;
        }
        else{
            cout<<"division of "<<num1<<" and " <<num2<<" is "<<num1/num2<<endl; 
        }
    }
    else{
        cout<<"Please perform  valid operation "<<endl;
    }

    cout<<endl;
    cout<<"If you want to continue press 1"<<endl;
    int one;
    cin>>one;

    if(one == 1){
        calculator();
    }
    else{
        cout<<"Thank You ! "<<endl;
    }
}
int main(){
    calculator();
}