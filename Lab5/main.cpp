#include<iostream>
using namespace std;
int main()
{
  int choice = 0;
  int size = 0, n = 0, count = 1;
  int x=0, y=0;


  cout<<"Choose a Pattern: \n";
  cout<<"1. Checkerboard\n";
  cout<<"2. Rook Path\n";
  cout<<"3. Running Total\n";
  cout<<"4. Upper Left Triangle\n";
  cout<<"5. Upper Right Triangle\n";

  cout<<"Input a choice: ";
  cin>>choice;

  if(choice == 1)
  {
    cout<<"Input a size: ";
    cin>>size;

    for(int i=0;i<size;i++)
    {
      for(int j=0;j<size;j++)
      {
        if(((j+i)%2) == 0)
        {
          cout<<"O";
        }
        else
        {
          cout<<"X";
        }
      }
      cout<<endl;
    }
  }
  if(choice == 2)
  {
    cout<<"Input size: ";
    cin>>size;
    cout<<"Position (x,y)\n";
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;

    for(int i=0;i<size;i++)
    {
      for(int j=0;j<size;j++)
      {
        if((j==x)&&(i==y))
        {
          cout<<"R";
        }
        else if(i==y)
        {
          cout<<"-";
        }
        else if(j==x)
        {
          cout<<"|";
        }
        else
        {
          cout<<"*";
        }
      }
      cout<<endl;
    }
  }
  if(choice == 3)
  {
    cout<<"Enter n for NxN matrix: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        cout<<count<<",";
        count++;
      }
      cout<<endl;
    }
  }
  if(choice==4)
  {
    cout<<"Enter n for triangle: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
      for(int j=n;j>0;j++)
      {
        cout<<"*";
      }
      cout<<endl;
    }
  }
  return(0);
}
