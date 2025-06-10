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

// lab exercise: three functions 
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