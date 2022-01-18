/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: CalebZinabu
 * Assignment:   EECS-168 Lab 2 Exercise 1
 * Description:  This program will help the user find the hypotenuse of a triangle.
 * Date: February 3, 2020
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  double a=0.0, b=0.0, answer=0.0;

  cout<<"We will use the formula a^2 + b^2 = c^2 to solve for the hypotenuse of a triangle.\n";
  cout<<"Input a value for a: ";
  cin>>a;
  cout<<"Input a value for b: ";
  cin>>b;
  answer = sqrt((a*a)+(b*b));

  cout<<"The hypotenuse is: "<<answer<<std::endl;

  return(0);
}
