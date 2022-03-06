/*Nested Class In C++*/
#include<iostream>
#include<string.h>
using namespace std;
class student
{
  public:
    int rollno;
    char name[20];
    class Address
    {
    private:
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[7];
     public:
        void setAddress(int h,char *s,char*c,char*st,char*p)
        {
            houseno=h;
            strcpy(street,s); //passing address
            strcpy(city,c);
            strcpy(state,st);
            strcpy(pincode,p);
        }
        void showAddress()
        {
            cout<<"\n"<<houseno<<endl;
            cout<<street<<" "<<city;
            cout<<"  "<<pincode<<endl;

        }
};

  Address add;
     public:
         void setRollno(int r){
         rollno=r;
         }
         void setName(char *n){
          strcpy(name,n);
         }
         void setAddress(int h,char *s, char *c, char *st, char *p){
            add.setAddress(h,s,c,st,p);
         }
         void showStudent()
         {
             cout<<"student Data"<<endl;
             cout<<rollno<<"   ";
             cout<<name<<"  ";
         }

int main()
{

     student::Address a1;
     Student s1;
     s1.setRollno(100);
     s1.setname("Rahul");
     s1.setAddress(067,"umerabad","srinagar","190012","Kashmir")
     s1.showStudent();
}
};
