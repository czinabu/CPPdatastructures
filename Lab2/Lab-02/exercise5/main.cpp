/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: CalebZinabu
 * Assignment:   EECS-168 Lab 2 Exercise 5
 * Description:  This program will take a number of sodas and then tell the user how many fridge cubes, six packs, and single sodas it will be packages as.
 * Date: February 3, 2020
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
using namespace std;
int main()
{
  int num1=0, num2=0, num3=0, num4=0;

  cout<<"How many sodas do you have? ";
  cin>>num1;

  num2 = (num1/24);

  cout<<"Fridge Cubes: "<<num2<<endl;

  num3 = (num1%24);

  cout<<"Six-packs: "<<num3/6<<endl;

  num4 = (num3%6);

  cout<<"Singles: "<<num4<<endl;

  return(0);
}
