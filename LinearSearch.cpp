/* Linear Search */
#include<iostream>
using namespace std;
void lsearch(int L[], int N, int item)
{
    int flag = 1, k;
    for(k=0; k<= N-1; k++){
        if(L[k]==item){
            flag = 0;
            cout<<"Search Successful"<<endl;
        }
    }
    if(flag == 1)
        cout<<"Search Unsuccessful"<<endl;
}
int main()
{
    int x;
    cout<<"Enter What are you looking for"<<endl;
    cin>>x;
    int A[]={22, 55, 33, 99, 11, 56, 77, 66, 1, 7};
    lsearch(A, 10, x);
    return 0;
}
