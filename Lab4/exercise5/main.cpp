#include<iostream>
using namespace std;
int main()
{
  int total = 0;
  int day = 0, day1 = 1, day2 = 5, day3 = 17, day4 = 0;

  cout<<"OUTBREAK\n";
  cout<<"What day do you want a sick count for?: ";
  cin>>day;

  if(day>0)
  {
    if(day==1)
    {
      cout<<"Total people with flu: 1\n";
    }
    else if(day==2)
    {
      cout<<"Total people with flu: 5\n";
    }
    else if(day==3)
    {
      cout<<"Total people with flu: 17\n";
    }
    else
    {
      for(int i=1;i<day;i++)
      {
          day4 = day1 + day2 + day3;
          day i asdfl;kj
      }
      cout<<"Total people with flu: "<<total<<"\n";
    }
  }
  else
  {
    cout<<"Invalid day. Try again\n";
  }

  return(0);
}
