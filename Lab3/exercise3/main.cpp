/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Caleb Zinabu
 * Assignment:   EECS-168 Lab 3
 * Description:  This program will take the user out to eat at a restaurant, and charge them appropriately.
 * Date: Febrauary 10, 2020
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
using namespace std;
int main()
{
  std::cout.precision(2);
  std::cout << std::fixed;

  int salads=0, drinks=0, cakes=0, age=0;
  double subtotal = 0.00, discount = 0.00, saladscost = 4.25, drinkscost = 1.05, cakescost = 3.55, tax=0.05;
  char choice = '\0';

    cout<<"============================\n";
    cout<<"WELCOME TO THE RESTAURANT!\n";
    cout<<"============================\n";

  cout<<"Do you want Salads? (y/n): ";
  cin>>choice;

  if(choice == 'y' || choice == 'Y')
  {
    cout<<"How many?: ";
    cin>>salads;

    if(salads<0)
    {
      salads = 0;
    }
  }

  cout<<"Do you want Drinks? (y/n): ";
  cin>>choice;

  if(choice == 'y' || choice == 'Y')
  {
    cout<<"How many?: ";
    cin>>drinks;

    if(drinks<0)
    {
      drinks = 0;
    }
  }

  cout<<"Do you want Cakes? (y/n): ";
  cin>>choice;

  if(choice == 'y' || choice == 'Y')
  {
    cout<<"How many?: ";
    cin>>cakes;

    if(cakes<0)
    {
      cakes = 0;
    }
  }

  cout<<"How old are you?: ";
  cin>>age;

  if(age>=65)
  {
    discount = 0.1;
  }

  if(age<=5)
  {
    drinkscost = 0;
  }

  cout<<"============================\n";

  cout<<salads<<" Salads @ $4.25 ==> $"<<salads*saladscost<<endl;
  cout<<drinks<<" Drinks @ $1.05 ==> $"<<drinks*drinkscost<<endl;
  cout<<cakes<<"Cakes @ $3.55 ==> $"<<cakes*cakescost<<endl;

  subtotal = (salads*saladscost)+(drinks*drinkscost)+(cakes*cakescost);

  cout<<"Subtotal: $"<<subtotal<<endl;
  cout<<"Tax: $"<<subtotal*tax<<endl;
  cout<<"Discount: $"<<subtotal*discount<<endl;

  cout<<"============================\n";

  cout<<"Total: $"<<(subtotal-(subtotal*discount))+(subtotal*tax)<<endl;
  cout<<"Please come again!\n";

  return(0);
}
