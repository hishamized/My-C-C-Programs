#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
 ofstream fout;
 fout.open("abc.txt.txt",ios::ate);
 cout<<fout.tellp();
 fout.seekp(2, ios_base::beg);
 fout<<"ABCDEFG";
 cout<<fout.tellp();
 fout.close();
 getch();
 }
