//By Mohammad Hisham
#include<stdio.h>
int main(){
   int x, y;
   printf("Enter the number of rows and columns ( between 3-9 )\n");
   scanf("%d", &y);
   if(y>=3 && y<=9) {
     x = y;
     for(int i=0; i< x; i++){
        printf("%d",i+1);
        if(i == x-1){
            printf(" \n");
        }
     }
      for(int j=1, t=5; j< x, t>0 ; j++, t--){
        if(j != x-1 && t>1){
            printf("%d   ",j+1);
            printf("%d",t-1);
            printf("\n");
        }
        if(j==x-1){
           printf("%d", j+1);

        }
     }
      for(int k=4; k > 0; k--){
        printf("%d",k);
     }

   }
   else {
    printf("Invalid number The number should be between 3 and 9.\n");
   }
   return 0;
}
