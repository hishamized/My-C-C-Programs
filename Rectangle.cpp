#include<iostream>
//#include<curses.h>
#include<conio.h>
using namespace std;
int main()
{
 char ch, ch1, ch2, ch3, ch4, ch5;
 int i, j;
 ch = 196;
 ch1 = 179;
 ch2 = 218;
 ch3 = 191;
 ch4 = 192;
 ch5 = 217;
 for(i=1; i<=20; i++)
 {
  gotoxy(i+10, 5);
  cout<<ch;
 }
 for(i=1; i<=20; i++)
 {
  gotoxy(i+10, 10);
  cout<<ch;
 }
 for(j=1; j<=4; j++)
 {
  gotoxy(11, j + 5)
  cout<<ch1;
 }
 for(j=1; j<=4; j++)
 {
  gotoxy(30, j+5);
  cout<<ch1;
 }
 gotoxy(11, 5);
 cout<<ch2;
 gotoxy(30, 5);
 cout<<ch3;
 gotoxy(11, 10);
 cout<<ch4;
 gotoxt(30, 10);
 cout<<ch5;
 return 0;
}
