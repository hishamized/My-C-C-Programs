#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
struct customer
{
    int accno;
    char name[30];
    float balance;
};
struct trans
{
    int accno;
    char trans_type;
    float amount;
};
void display(char*);
void add_info(int, char*, float);
void transacton(int, char, float);
int main()
{
 add_info(1, "Ahmed", 1000);
 puts("\n\tBefore Transaction :");
 display("customer.dat");
 transaction(1, "Ahmed", 1000);
 puts("\n\tAfter Transaction :");
 display("customer.dat");
 _getch();
 return 0;
}
void display(char *file)
{
    FILE *fp;
    struct customer holder;
    fp = fopen("file", "rb");
    while(fread(&holder,sizeof(holder),1,fp) == 1)
    {
        printf("\nAccount NO. : %d",holder.accno);
        printf("\nName on the account : %s", holder.name);
        printf("\nAccount Balance : %f", holder.balance);
    }
    fclose(fp);
}
void add_info(int accno, char *name, float bal)
{
    FILE *fp;
    struct customer holder;
    fp = fopen("customer.dat", "rb+");
    if(fp == NULL)
       fp = fopen("customer.dat", "wb");
    fseek(fp, 0, SEEK_END);
    holder.accno = accno;
    strcpy(&holder.name, name);
    holder.balance = bal;
    fwrite(&holder, sizeof(holder), 1, fp);
    fclose(fp);
}
void transaction(int accno, char ttype, float amount)
{
    struct customer holder;
    FILE *fp, *temp;
    fp = fopen("customer.dat", "rb");
    temp = fopen("temp.dat", "rb");
    while(fread(&holder, sizeof(holder), 1, fp) == 1)
    {
        if(holder.accno == accno)
        {
            switch(ttype)
            {
                case 'd':
                case 'D':
                    holder.balance = holder.balance + amount;
                    break;
                case 'w':
                case 'W':
                    if(holder.balance - amount < 100)
                    {
                        printf("\nInsufficient balance for the withdrawal.");
                        printf("\nTransaction Failed!");
                        _getch();
                    }
                    else
                        holder.balance = holder.balance - amount;
                    break;
                default:
                    printf("\nWrong transaction type.");
                    printf("\Try again!");
                    return;

            }
        }
        fwrite(&holder, sizeof(holder), 1, temp);
    }
    fclose(fp);
    fclose(temp);
    remove("customer.dat");
    rename("temp.dat", "customer.dat");
}
