/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Brandon Lopez
 */
#include<iostream>
#include<cmath>
using namespace std;

void roots(int a, int b, int c){
  
  float rootOne,rootTwo,real,imaginary;
  int numSqrt = (b*b)-(4*a*c);

  if(numSqrt == 0)
  {
    rootOne =(float)(-b)/(2*a);
    cout << "Both roots are: "<<rootOne << endl;
  }
  else if(numSqrt>0)
  {
    rootOne =(float)(-b+sqrt(numSqrt))/(2*a);
    rootTwo =(float)(-b-sqrt(numSqrt))/(2*a);
    cout << "Root one is: "<<rootOne<<" and root two is: "<<rootTwo << endl;
  }
  else
  {
    cout << "Equation failed, b^2 - 4ac is less than 0 "<<endl;
  }
}

int main()
{
  int a,b,c;
  cout<<"Enter a, b, and c: ";
  cin>>a>>b>>c;
  roots(a,b,c);
  return 0;
}