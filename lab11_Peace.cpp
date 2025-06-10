/*
McKenna Cruz Peace
June 9 & 10, 2025
lab 11 predefined functions, recursive functions
*/

#include<iostream>
#include<string>
using namespace std;

#include "lab11_Peace_functions.cpp"
#include<cmath>

int main(){

cout<<"Example 1: calculate the hypotenuse "<<endl;

    float side1 = side();
    float side2 = side();
    float cal_hyp = hyp(side1, side2);

    print_result(side1, side2, cal_hyp);

cout<<"Example 2: Random number "<<endl;

   int random = random_number();

   cout<<"Random number = "<< random<<endl; 

cout<<"Example 3: Random number between -5 and 5  "<<endl;

 int rand5 = random_five();

 cout<<"Random number = "<< rand5 <<endl; 

cout<<"Lab Exercise "<<endl;

   int time = random_time();
   int gravity = 9.8;

   int cal_distance = falling_distance(gravity, time);

   // cout<<"Random time generated: "<<time<<endl;

   // cout<<"Distance calculated: "<<cal_distance<<endl;

   print_calcuation(time, cal_distance);




 return 0;
}