/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Caleb Zinabu
 * Assignment:   EECS-168 Lab 3
 * Description:  This program will obtain a numerator and denominator from the user, then display the result of long division.
 * Date: February 10, 2020
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int num=0, den=0, rem=0, ans=0;

  cout<<"Enter a numerator: ";
  cin>>num;

  cout<<"Enter a denominator: ";
  cin>>den;

  if(den==0)
  {
    cout<<"Sorry, you may not divide by zero.\n";
  }
  else
  {
    ans = (num/den);
    rem = (num%den);

    cout<<num<<" / "<<den<<" = "<<ans<<" Remainder "<<rem<<endl;
  }

  return(0);
}
