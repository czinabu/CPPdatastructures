/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Caleb Zinabu
 * Assignment:   EECS-168 Lab 4 Exercise 1
 * Description:  This program will print the amount of times a character appears in a given word.
 * Date: February 17, 2020
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
#include<string>
using namespace std;
int main()
{
  string word;
  char letter;
  int count = 0;

  cout<<"Enter a string: ";
  cin>>word;

  cout<<"Enter a character to count: ";
  cin>>letter;

  for(unsigned int i=0;i<word.length();i++)
  {
    if(word.at(i) == letter)
    {
      count++;
    }
  }

  cout<<"In the string "<<word<<" the letter \'"<<letter<<"\' occurs "<<count<<" time(s).\n";

  return(0);
}
