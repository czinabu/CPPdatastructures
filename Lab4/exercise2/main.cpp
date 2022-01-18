/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Caleb Zinabu
 * Assignment:   EECS-168 Lab 4 Exercise 2
 * Description:  This program will help the user guess a random number between 1-100.
 * Date: February 17, 2020
 *
 ---------------------------------------------------------------------------- */
 #include<iostream>
 #include<stdlib.h>
 #include<time.h>
 using namespace std;
 int main()
 {
   int num;
   int guess = 0;
   char choice;
   int count = 1;
   int closestnum = 1000;

   srand(time(NULL));

   do
   {
        num = rand() % 100 + 1;
        cout<<"Welcome to the number guessing game.\n";

     do
     {
       cout<<"Guess a number betwen 1-100: ";
       cin>>guess;

       if(abs(num - guess) < abs(num - closestnum) && (num != guess))
       {
         closestnum = guess;
       }

       if(guess>num)
       {
         cout<<"Sorry, your guess is too high!\n";
         count++;
       }
       else if(guess<num)
       {
         cout<<"Sorry, your guess is too low!\n";
         count++;
       }
     }while(guess != num);
       cout<<"You win!\n";
       cout<<"You guessed the number after "<<count<<" guess(es)\n";
       cout<<"Your closest guess was: "<<closestnum<<"\n";

       count = 0;

       cout<<"Would you like to play again? (y/n): ";
       cin>>choice;
   }while(choice == 'y' || choice == 'Y');
 }
