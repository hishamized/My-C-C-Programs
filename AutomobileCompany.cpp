#include<iostream>
using namespace std;
struct engine
{
    char serial[4];
    int yom;
    char mat[50];
    int quantity;
}
suzuki[10] =
{
  "AA0", 2005, "Iron", 20,
"BB1", 2007, "Steel", 13,
"BB2", 1992, "Aluminium", 57,
"CC1", 2005, "Stainless Steel", 7,
"CC6", 2007, "Steel", 34,
"CC7", 2010, "Steel", 14
};
void info(char* , char*);
int main()
{
    char from[5], to[5];
    cout<<"Enter the serial number from which you wish to start the list.\n";
    cin>>from;
    cout<<"Enter the serial number at which you want to end the list.\n";
    cin>>to;
    info(from, to);
    return 0;
}
void info(char* from, char* to)
{
    int i;
    cout<<"\n\t Engine Information : \n";
    for(i=0; suzuki[i].serial[0]!= *from; i++);
    while(1)
    {
        cout<<"Serial Number : "<<suzuki[i].serial<<endl;
        cout<<"Year of manufacture : "<<suzuki[i].yom<<endl;
        cout<<"Material used : "<<suzuki[i].mat<<endl;
        cout<<"Quantity : "<<suzuki[i].quantity<<endl;
        if(i==10)
        {
            i=0;
        }
        i++;
        if(suzuki[i].serial[0] == *to && suzuki[i].serial[0] == *(to + 2))
        {
          cout<<"Serial Number : "<<suzuki[i].serial<<endl;
          cout<<"Year of manufacture : "<<suzuki[i].yom<<endl;
          cout<<"Material used : "<<suzuki[i].mat<<endl;
          cout<<"Quantity : "<<suzuki[i].quantity<<endl;
          return;
        }
    }
}
