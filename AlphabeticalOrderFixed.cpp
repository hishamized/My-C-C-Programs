#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[10][8], tname[10][8], temp[8];
    int n, i, j;
    cout<<"Enter the number of names you wish to enter : \n";
    cin>>n;
    cout<<"Enter"<<" "<<n<<" "<<"names\n";
    for(i=0; i<n; i++)
    {
        cin>>name[i];
        strcpy(tname[i], name[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(name[i],name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    cout<<"\n..................................\n";
    cout<<"\nNames Sorted\n";
    for(i=0; i<n; i++)
    {
        cout<<tname[i]<<"\t\t"<<name[i]<<"\n";
    }
    return 0;
}
