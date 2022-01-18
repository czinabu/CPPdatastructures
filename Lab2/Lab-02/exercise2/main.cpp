/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: CalebZinabu
 * Assignment:   EECS-168 Lab 2 Exercise 2
 * Description:  This program will help the user solve the quadratic formula.
 * Date: February 3, 2020
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  double a=0.0, b=0.0, c=0.0, root1=0.0, root2=0.0;

  cout<<"Input a: ";
  cin>>a;
  cout<<"Input b: ";
  cin>>b;
  cout<<"Input c: ";
  cin>>c;

  root1 = ((b*b) - (4*a*c));
  root1 = -b + sqrt(root1);
  root1 = root1 / (2*a);

  root2 = ((b*b) - (4*a*c));
  root2 = -b - sqrt(root2);
  root2 = root2 / (2*a);

  cout<<"Root 1 = "<<root1<<endl;
  cout<<"Root 2 = "<<root2<<endl;

  return(0);
}
