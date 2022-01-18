/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Caleb Zinabu
 * Assignment:   EECS-168 Lab 4 Exercise 4
 * Description:  This program will help the user find the ascii value of a character.
 * Date: February 3, 2020
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
using namespace std;
int main()
{
  int choice = 0;
  int value = 0;

  do
  {
    cout<<"Select an option: \n";
    cout<<"1.) Select a specific ASCII character provided an int\n";
    cout<<"2.) Display visible ASCII values (33 to 126)\n";
    cout<<"3.) Exit\n";
    cout<<"Choice: ";
    cin>>choice;

    if(choice == 1)
    {
      cout<<"Enter value: ";
      cin>>value;

      cout<<value<<" = "<<(char)value<<"\n";
      cout<<"\n";
    }else if(choice == 2)
    {
      for(int i=33;i<126;i++)
      {
        cout<<i<<" = "<<(char)i<<"\n";
      }
    }
    else if(choice > 3 || choice < 1)
    {
      cout<<"Invalid choice...\n";
    }
  }while(choice != 3);

  return(0);
}
