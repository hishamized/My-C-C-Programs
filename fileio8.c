#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
void display(char*);
void add_info(char*, char*, struct date, float);
void sortdoj(char*);
void swap(struct employee*, struct employee);
struct date
{
    int d, m, y;
};
struct employee
{
    int empcode[6];
    char empname[20];
    struct date join_date;
    float salary;
};
int main()
{

	struct date d = {13, 1, 1995};
	add_info("EMP01","Siraj", d,  50000.00);
	d.d = 17; d.m = 5; d.y = 1994;
	add_info("EMP04","Karan", d,45000.00);
	d.d = 7; d.m = 7; d.y = 1995;
	add_info("EMP03","Deepak", d,45000.00);
	d.d = 2; d.m = 11; d.y = 1995;
	add_info("EMP02","Azad",d,45000.00);
	d.d = 15; d.m = 1; d.y = 2001;
	add_info("EMP04", "Vijay", d, 21000.00);
	d.d = 24; d.m = 5; d.y = 1993;
	add_info("EMP06", "Shanu", d, 55000.00);
	sortbydoj("Record.dat");
	_getch();
	return 0;
}
void display(char *file)
{
    FILE *fp;
    struct employee e;
    fp = fopen(file, "rb");
    while(fread(&e, sizeof(e), 1, fp) == 1)
    {
        printf("\nEmployee Code: %s", e.empcode);
        printf("\nEmployee Name: %s", e.empname);
        printf("\nDate of joining: %d - %d - %d", e.join_date.d, e.join_date.m, e.join_date.y);
        printf("\nEmployee Salary: %f", e.salary);
    }
    fclose(fp);
}
void swap(struct employee *a, struct employee *b)
{
    struct employee temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void add_info(char *code, char *name, struct date doj, float salary)
{
    FILE *fp;
    fp = fopen("Record.dat", "rb+");
    if(fp == NULL)
        fp = fopen("Record.dat", "wb");
    struct employee e;
    strcpy(e.empcode, code);
    strcpy(e.empname, name);
    e.join_date = doj;
    e.salary = salary;
    fseek(fp, 0, SEEK_END);
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
}
void sortbydoj(char *file)
{
    int i=0; j; count;
    	struct employee e[100], temp;
    FILE *fp1;
    fp1 = fopen(file, "rb+");
    if(fp1 == NULL)
    {
        puts("\nUnable to open the file or the file does not exist.");
        exit(1);
    }
    while(1)
    {
        if(fread(&e[i], sizeof(e[i]), 1, 1, fp) != 1)
        {
           break;
           i++
        }

    }
    count = i;
    for(i=0; i<count; i++)
    {
        for(j = i+1; j<count; j++)
        {
            if(e[i].join_date.y >= e[j].join_date.y)
                if(e[i].join_date.y > e[j].join_date.y)
                swap(&e[i], &e[j]);
            else
                if(e[i].join_date.m >= e[j].join_date.m)
                   if(e[i].join_date.m > e[j].join_date.m)
                   swap(&e[i], &e[j]);
            else if(e[i].join_date.d >= e[j].join_date.d)
                   swap(&e[i], &e[j]);
        }
    }
    printf("Employee ID\t Name\t dd mm yyyy \t salary \n");
    for(i=0; i<count; i++)
    {
        printf("\n%-12s", e[i].empcode);
        printf("\t%s", e[i].empname);
        printf("\t%2d", e[i].join_date.d);
        printf("\t%2d", e[i].join_date.m);
        printf("\t%2d", e[i].join_date.y);
        printf("\t%2.2f\n", e[i].salary);
    }
}
