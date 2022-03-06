#include<iostream>
using namespace std;
struct marks
{
    int j[3];
    int tot;
};
int main()
{
    struct marks player[5];
    int i, j, max = 0;
    for(i=0; i<5; i++)
    {
        cout<<"\n\n\tMarks for player "<<i+1<<" : \n";
        for(j=0; j<3; j++)
        {
            cout<<"\nEnter the rank assigned to player "<<i+1<<" by the "<<j+1<<"th judge.\n";
            cin>>player[i].j[j];
        }
        player[i].tot = player[i].j[0] + player[i].j[1] + player[i].j[2];
        if(player[i].tot > max)
        {
            max = player[i].tot;
        }
    }
    for(i=0; i<5; i++)
    {
        if(max == player[i].tot)
        {
            cout<<"\nThe player chosen as the MVP by the judges is : "<<i+1<<endl;
        }
    }
    return 0;
}
