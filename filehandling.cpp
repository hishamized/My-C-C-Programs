#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
 ifstream fin;
 char ch;
 fin.open("abc.txt");
 int pos;
 pos=fin.tellg();
 cout<<pos;
 fin>>ch;
 pos=fin.tellg();
 cout<<pos;
 getch();
}
