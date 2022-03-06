#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void printArray(char* names[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<names[i]<<endl;
    }
}
void reverseArray(char* names[], int n)
{
    char* temp;
    int j = n - 1;
    for(int i=0; i<j; i++)
    {
        temp = names[i];
        names [i] = names [j];
        names[j] = temp;
        j--;
    }
}
int main()
{
    int n;
    char *names[n];
    char a[50];
    cout<<"Enter the number of names you wish to store\n";
    cin>>n;
    int len, i;
    char *p;
    for(i=0; i<n; i++)
    {
        cout<<"Enter a name : \n";
        cin>>a;
        len = strlen(a);
        p = (char *)malloc(len + 1);
        strcpy(p, a);
        names[i] = p;
    }
    printArray(names, n);
    reverseArray(names, n);
    printArray(names, n);
    return 0;
}
