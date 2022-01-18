/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: CalebZinabu
 * Assignment:   EECS-168 Lab 2 Exercise 4
 * Description:  This program will help the user find the ascii value of a character.
 * Date: February 3, 2020
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
using namespace std;
int main()
{
  char letter;

  cout<<"Input a character: ";
  cin>>letter;

  int value = (int) letter;

  cout<<"The ASCII value for "<<letter<<" is: "<<value<<endl;

  return(0);
}
