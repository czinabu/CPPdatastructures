#include<iostream>
#include<math.h>
using namespace std;
void printHello()
{
  for(int i=0;i<1000;i++)
  {
    cout<<"Hello"<<endl;
  }
}
int cube(int num)
{
  int cubed = (num*num*num);
  return(cubed);
}
int stringNum()
{
  string word;
  int num = 0;

  cout<<"Enter a number: "<<endl;
  cin>>num;

  cout<<"Enter a word: "<<endl;
  cin>>word;

  for(int i=1;i<num;i++)
  {
    cout<<word<<endl;
  }
}
int main()
{
  int choice = 0;
  do
  {
    cout<<endl;
    cout<<"1. Print Hello 1000 times."<<endl;
    cout<<"2. Cube any number."<<endl;
    cout<<"3. Print a word a given amount of times."<<endl;
    cout<<"4. Exit."<<endl;
    cout<<endl;

    cout<<"Choose your desired function: "<<endl;
    cin>>choice;

    if(choice == 1)
    {
      printHello();
    }else if(choice == 2)
    {
      int x=0;
      cout<<"Enter a number: "<<endl;
      cin>>x;

      cout<<"The number "<<x<<" cubed is: "<<cube(x)<<endl;
    }
    else if(choice == 3)
    {
        stringNum();
    }
    else if(choice > 4)
    {
      cout<<"Choose a valid choice!"<<endl;
    }
  }while(choice != 4);

  return(0);
}
