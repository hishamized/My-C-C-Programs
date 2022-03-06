#include<iostream>
using namespace std;
int main()
{
    int speed;
    char cat;
    cout<<"\nEnter the wind speed that you have recorded.\n";
    cin>>speed;
    if(speed >= 74 && speed <= 95)
        cout<<"\nIt's a category I hurricane.\n";
    if(speed >= 96 && speed <= 110)
        cout<<"\nIt's a category II hurricane.\n";
    if(speed >= 111 && speed <= 130)
        cout<<"\nIt's a category III hurricane.\n";
    if(speed >= 131 && speed <= 155)
        cout<<"\nIt's a category IV hurricane.\n";
    if(speed > 155)
        cout<<"\nIt's a category V hurricane.\n";
    return 0;
}

