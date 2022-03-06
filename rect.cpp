/* Author: Mohammad Hisham Mir
   EnrolL: 8613
   Section: B
   College: SSMCET
   Branch/Sem: CSE/3rd
*/
//C++ Program to find the area of a rectangle
#include<stdio.h>
#include<iostream>
 using namespace std;
 class Test
 {
   public:
     int length, breadth, area;

     void input()
     {
      cout<<"Enter the lenth of the rectangle:";
      cin>> length;
      cout<<"Enter the breadth of the rectangle:";
      cin>> breadth;

     }

     void calculateArea()
     {
       area=length*breadth;
     }
     void viewArea()
     {
      cout<<"Area of the rectangle is:"<<area;

     }

 };
 int main()
 {
  Test obj;
  obj.input();
  obj.calculateArea();
  obj.viewArea();
  return 0;
 }

