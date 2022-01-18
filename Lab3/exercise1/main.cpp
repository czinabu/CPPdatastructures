/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Caleb Zinabu
 * Assignment:   EECS-168 Lab 3
 * Description:  This program will tell the user what type of storm they are in.
 * Date: February 10, 2020
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
using namespace std;
int main()
{
  int speed=0;

  cout<<"Input a wind speed (m/s): ";
  cin>>speed;

  if(speed>=70)
  {
    cout<<"A wind speed of "<<speed<<" is a Category 5 hurricane.\n";
  }
  else if(speed>=58)
  {
    cout<<"A wind speed of "<<speed<<" is a Category 4 hurricane.\n";
  }
  else if(speed>=50)
  {
    cout<<"A wind speed of "<<speed<<" is a Category 3 hurricane.\n";
  }
  else if(speed>=43)
  {
    cout<<"A wind speed of "<<speed<<" is a Category 2 hurricane.\n";
  }
  else if(speed>=33)
  {
    cout<<"A wind speed of "<<speed<<" is a Category 1 hurricane.\n";
  }
  else if(speed>=18)
  {
    cout<<"A wind speed of "<<speed<<" is a Tropical Storm.\n";
  }
  else if(speed>=0)
  {
    cout<<"A wind speed of "<<speed<<" is a Tropical Depression.\n";
  }
  else
  {
    cout<<"Negative wind? Sorry, that's invalid.\n";
  }

  return(0);
}
