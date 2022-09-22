#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>


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

bool checkSign(char x){
    if(x =='+' || x == '-' || x == '*' || x == '/'){
        return true;
    }
    else{
        return false;
    } 
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




int  main(int argc, char  *argv[]){
    // cout << "Enter the  1st number :";
    char  * problem[10];
    problem[0] = argv[1];
    problem[1] = argv[2];
    problem[2] = argv[3];


    // int found = problem.find("*"); 

    // problem = strtok(problem ,"*");
    cout << problem[0];
    
    // cout << "The Answer  is : "<< problem[found-1] * problem[found+1];
    
    

    // cout << ">>";
    // cin >> problem;
    // cout << problem;

    /*"trying  to setup a command line  with multiple signs  and  brackets  usage  NEXT  COMMIT TO BE ABLE TO BREAK DOWN THE  PROBLEM  TO DIFFERENT  COMPONENTS STORE DTA  IN ARRAYS  AND COMPUE THE ELEMENTS IN THE CORRECT  ORDER"  */
    




    // double num1 , num2; int  choice;
    // cin >> num1;

    // cout << "Enter the  2nd number :";
    // cin >> num2;

    // cout << "Pick  your  arithmetic computation :";
    // cout <<"\n1. Add\t2.Subtract\n3.Multiply\t4.Divide\n\n:====>>";
    // cin >> choice;

    // computeProblem(num1 , num2 , choice);

    

}