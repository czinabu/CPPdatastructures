/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Caleb Zinabu
 * Assignment:   EECS-168 Lab 9
 * Description:  This program will count the number of "crosses" in a file,
 * provided at the command line.
 * Date: November 8, 2019
 *
 ---------------------------------------------------------------------------- */

#include<iostream>
#include<fstream>
#include<string
using namespace std;
int main()
{
  char **str = new char*[];
  string file;
  ifstream myFile("");

  cout<<"Enter name of file (ex: sample.txt): ";
  cin>>file;

  checkFile.open(file);
  getline (myFile);

  cout<<line<<endl;

  checkFile.close();

return(0);
}
