/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Caleb Zinabu
 * Assignment:   EECS-168 Lab 4 Exercise 3
 * Description:  This program will have the help the user guess the word "valentine".
 * Date: February 17, 2020
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
using namespace std;
int main()
{
  string word = "valentine";
  string guess;
  char choice;
  int count = 0;

  do
  {
    cout<<"Welcome to the word guessing game!\n";

    do
    {
      cout<<"Guess a word!: ";
      cin>>guess;

      if(guess.length() == word.length())
      {
        for(unsigned int i=0;i<word.length();i++)
        {
          if(word.at(i) == guess.at(i))
          {
            count++;
          }
        }
        cout<<"You have "<<count<<" letters correct\n";
      }
      else
      {
        if(guess.length() > word.length())
        {
          cout<<"The word is shorter.\n";
        }
        else if(guess.length() < word.length())
        {
          cout<<"The word is longer.\n";
        }
      }
    }while(word != guess);
    cout<<"You win! Would you like to play again?(y/n): ";
    cin>>choice;
  }while(choice == 'y');

  return(0);
}
