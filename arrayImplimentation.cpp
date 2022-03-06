#include<iostream>
#include<string.h>
using namespace std;
void display(char a[], int n)
{
    for(int j=0; j<n; j++)
    {
        cout<<"\t"<<a[j];
    }
}
int main()
{
    char array[7] = {"HISHAM"} ;
    char array2[7];
    /*cout<<"\n\nEnter 7 integers into the string.\n\n";
    for(int i=0; i<7; i++)
    {
        cout<<"\nEnter the "<<(i)<<" th element";
        cin>>array[i];
    } */
    /*cout<<"\nThe array is : \n";
    for(int j=0; j<7; j++)
    {
        cout<<"\t"<<array[j];
    } */
    //cout<<"\n\n"<<&array[0];
    //cout<<"\n\n"<<&array[7];
    int l = strlen(array);
    cout<<"\nThe length of string "<<array<<" is : "<<l<<endl;
    strcpy(array2, array);
    display(array2, 6);
    cout<<"\n\n"<<strcmp(array2, array);
    return 0;
}
