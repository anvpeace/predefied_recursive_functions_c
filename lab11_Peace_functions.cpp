/*
McKenna Cruz Peace
June 9 & 10, 2025
lab 11 predefined functions, recursive functions
*/


#include<iostream>
#include<string>
using namespace std;
#include<cmath>
#include <time.h>
#include <cstdlib>

// example 1: calculate hypotnuse of right angle
// function to collect number

float side(){

    int s;
    cout<<"Enter a positive number: ";
    cin>>s;

    while(s <= 0 ){
        cout<<"Invalid! Enter a positive numer ";
        cin>>s;
    }
    return s;
}

// example 2: function that calculates the hypotenuse
//  hyp = square_root(side1^2 + side2^2)

float hyp(float side1, float side2){

    return sqrt(pow(side1, 2) + pow(side2, 2));
}

void print_result(float side1, float side2, float hyp){

    cout.setf(ios::fixed);
    cout.precision(2);

    cout<<"The hypotenuse of a right angle with sides "<< side1 << " and "<< side2 <<" is "<< hyp<<endl;
}

// example 2: random number generator

int random_number(){
// because thereis only one seed it will only throw 1 random number
// multiple seeds are needed to generate different random numbers

// set different seed for rand
    srand(time(0));

    return rand(); // rand() by default uses one seed
}

// example 3: generate between -5 and 5

int random_five(){
    //set different seeds fro random
    srand(time(0));

    return -5 + rand()%11;

}

// Example 4
void cheer(int n){

    // one block calls the recursive the other one stops
    if(n<=1){
        cout<<"STOP"<<endl;
    }else{
        cout<<(n * 2)<<"\t";
        cheer(n-1);
    }
}

/* TABLE OF ANALYSIS
function   | int n  |  if(n<=1)      |  else
--------------------------------------------------------------
iteration  |        | true or false  | cout<<(n*2) | cheer(n-1)
----------------------------------------------------------------
    1      |    5   |if(5<=1) false  | cout<<(5*2) = 10 | cheer(5-1)= 4
----------------------------------------------------------------
    2      |    4   | if(4<=1) false | cout<<(4*2) = 8  | cheer(4-1) = 3
-----------------------------------------------------------------
    3      |   3    | if(3<=1) false | cout<<(3*2) = 6  | cheer(3-1) = 2
------------------------------------------------------------------------
    4      |   2    | if(2<=1) false | cout<<(2*2) = 4  | cheer(2-1) = 1
-----------------------------------------------------------------------
    5      |   1    | if(1<=1) true  (STOP)

    terminal prompt: 10 8 6 4 STOP

*/

// example 5:factorial sequence
int factorial(int n){
    if(n != 1){
        return (n*factorial(n-1));
    }else{
        return 1;
    }
}

/* TABLE OF ANALYSIS
function   |           |  if(n!=1)                               |  else
iteration  |  int n    |return(n*factorial(n-1))                 |  return 1
----------------------------------------------------------------
    1      |   n = 4   |true, return(4*factorial(4-1 = 3))       |  skip
----------------------------------------------------------------
    2      |   n = 3   |true, (4*return(3*factorial(3-1 = 2)))   |  skip
-----------------------------------------------------------------
    3      |   n = 2   |true, (4*3*return(2*factorial(2-1 = 1))) |  skip
------------------------------------------------------------------------
    4      |   n = 1   |false (stop recursive function           | return 1
-----------------------------------------------------------------------
    
int f = factorial(4); --> 4*3*2*1 = 24
cout<<"The final answer is = "<<f<<endl; ---> the final answer = 24


*/

// example 6: linear recursive functions

int linearfunction(int m){
    if(m>10){
        return -6;
    }else{
        return (linearfunction(m+2) * (m-4));
    }
}


/* TABLE OF ANALYSIS
function   |           | if(m>10)      |  else
iteration  |  int m    | return -6     |  return (linearfunction(m+2) * (m-4))
----------------------------------------------------------------
    1      |   m = 3   |  skip         | return (linearfunction(3+2 = 5) * (3-4 = -1))
----------------------------------------------------------------
    2      |   m = 5   | skip          | return (linearfunction(5+2 = 7) * (5-4 = 1))*(-1)
-----------------------------------------------------------------
    3      |   m = 7   | skip          | return (linearfunction(7+2 = 9) * (7-4 = 3))*(1)*(-1)
------------------------------------------------------------------------
    4      |   m = 9   | skip          | return (linearfunction(9+2 = 11) * (9-4 = 5))*(3)*(1)*(-1)
-----------------------------------------------------------------------
    5      |   m = 11  | return -6   (stop recursive functions)
  
int f = factorial(4); --> -6*-5*3*1*-1 = 90
cout<<"The final answer is = "<<f<<endl; ---> the final answer = 24


*/


// LAB EXERCISE A 
// three functions 
// One function to randomly generate and return a number between 1 and 100 (you must use C++ built-in function).

int random_time(){

    srand(time(0));
    return 1 + rand()%99;
} 

// One function that will calculate the falling distance of an object using the following formula (you must use C++ built-in function):
// float gravity = 9.8;

int falling_distance(float gravity, int time){

    float distance = 0.5*gravity*pow(time, 2);
    return distance;


}

void print_calcuation(float time, float falling_distace){

    cout.setf(ios::fixed);
    cout.precision(2);

    cout<<"The falling distance in "<< time <<" seconds is "<< falling_distace<< " meters" << endl;

}
// The function returns the calculated distance as a float value.
// The gravity is set as a global variable with value of 9.8. 

//The time is collected from the first function and passes as an argument.

// LAB EXERCISE B
int mystery(int n){
    if (n<=1){
        return 1;
    }else{
        return (mystery(n-1)+n*2);
    }
}

/* TABLE OF ANALYSIS
function   |           | if(n<=1)     |  else
iteration  |  int n    | return 1     |  return (mystery(n-1)+n*2)
----------------------------------------------------------------
    1      |   n = 5   |  skip         | return (mystery(5-1 = 4) +5 * 2 = 10)
----------------------------------------------------------------
    2      |   n = 4   | skip          | return (mystery(4-1 = 3) +4 * 2 = 8)
-----------------------------------------------------------------
    3      |   n = 3   | skip          | return (mystery(3 -1 = 2) +3 * 2 = 6)
------------------------------------------------------------------------
    4      |   n = 2   | skip          | return (mystery(2-1 = 1) +2 * 2 = 4)
-----------------------------------------------------------------------
    5      |   n = 1   | return 1       (stop recursive function)
  
mystery(5); --> 10 + 8 + 6 + 4 + 1 = 29
cout<<"Result = "<<mystery(5)<<endl; ----> Result = 29

*/