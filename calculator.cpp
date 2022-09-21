#include<iostream>
#include<stdio.h>

using namespace std;

double add(double num1 , double num2 ){
    return  num1+num2;
}

double subtract(double num1 , double num2 ){
    return  num1-num2;
}

double multiply(double num1 , double num2 ){
    return  num1 * num2;
}

double divide(double num1 , double num2 ){
    return  num1 / num2;
}

void display(double  num){
    cout << num;
}


void computeProblem(double num1 , double num2 , int  choice){

    switch (choice)
    {
    case 1:
        display(add(num1 , num2));
        break;
    case 2:
        display(subtract(num1 , num2));
        break;
    case 3:
        display(multiply(num1 , num2));
        break;
    case 4:
        display(divide(num1 , num2));
        break;
        
    default:
        break;
    }
}



int  main(){
    // cout << "Enter the  1st number :";
    
    string problem ;
    cout << ">>";
    cin >> problem;
    cout << problem;

    
    




    // double num1 , num2; int  choice;
    // cin >> num1;

    // cout << "Enter the  2nd number :";
    // cin >> num2;

    // cout << "Pick  your  arithmetic computation :";
    // cout <<"\n1. Add\t2.Subtract\n3.Multiply\t4.Divide\n\n:====>>";
    // cin >> choice;

    // computeProblem(num1 , num2 , choice);

    

}