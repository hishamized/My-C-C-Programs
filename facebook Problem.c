#include<stdio.h>
int main(){
    int id;
    char name[30];
    printf("==========INFORMATION==========");
    printf("\n");
    printf("   Input ID[4]   =   ", id);
    scanf("%d", &id);
    printf("      Input Name   =   ", name);
    getchar();
    fgets(name, 30, stdin);
    printf("================================\n");
    printf("\n");
    printf("------ID------NAME------ \n");
    printf("\n");
    printf("   %d   %s   ", id, name);
        printf("\n");
            printf("\n");
    printf("================================\n");
    return 0;
}

