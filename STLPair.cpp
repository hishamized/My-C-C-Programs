#include<iostream>
using namespace std;
 class student{
  private:
   string name;
   int age;
  public:
   void setStudent(string s, int a){
    name=s; age=a;
   }
   void showStudent(){
     cout<<"\nName:"<<name;
     cout<<"\nAge:"<<age;
   }
};
int main(){
 pair <string, int> p1;
 pair <string, string>p2;
 pair <string, float> p3;
 pair <int, student> p4;
 p1=make_pair("Rahul",16);
 p2=make_pair("India","New Delhi");
 p3=make_pair("Drilling C++",345.5f);
 student s1;
 s1.setStudent("Aishwarya",19);
 p4=make_pair(1,s1);
 cout<<"\nPair 1";
 cout<<"\n"<<p1.first<<" "<<p1.second;
 cout<<"\nPair 2";
 cout<<"\n"<<p2.first<<" "<<p2.second;
 cout<<"\nPair 3";
 cout<<"\n"<<p3.first<<" "<<p3.second;
 cout<<"\nPair 4";
 cout<<"\n"<<p4.first<<" ";
 student s2=p4.second;
 s2.showStudent();
}
