/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: CalebZinabu
 * Assignment:   EECS-168 Lab 2 Exercise 3
 * Description:  This program will help the user convert from fahrenheit to celsius.
 * Date: February 3, 2020
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  double ctemp=0.0, ftemp=0.0;

  cout<<"Input temperature in fahrenheit: ";
  cin>>ftemp;

  ctemp = (ftemp - 32);
  ctemp = (ctemp * (5.0/9));

  cout<<"Your temperature in celsius is: "<<ctemp<<endl;

  return(0);
}
