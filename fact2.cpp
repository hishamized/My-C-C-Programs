//factorial with recursion
long fact(int n)
{
 if(n>0)
    return(n*fact(n-1));
 else
    return(1);
}
main()
{
 printf("Factorial of 5 is %ld", fact(5));
 getch;
}
/* 5!= 5 x4 x3 x2 x1 = 120
  fact(5)
    5*fact(4)
     4*fact(3)
      3*fact(2)
       2*fact(1)
        1*fact(0)
         1*/
