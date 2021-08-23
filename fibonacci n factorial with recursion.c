#include <stdio.h>
void factorial(int n) 
{
 int i,product=1;;
 for(i=1;i<=n;i++)
 {
 product=product*i;
 }
 printf("\nfactorial= %d",product);
}
void fib(int n)
{
 int i, t1 = 0, t2 = 1, nextTerm;
 printf("\nFibonacci Series: ");
 for (i = 1; i <= n; ++i) 
 {
 printf("%d ", t1);
 nextTerm = t1 + t2;
 t1 = t2;
 t2 = nextTerm;
 }
}
 
Int main() 
{
 int n;
 int i;
 printf("enter a number");
 scanf("%d",&n);
factorial(n);
 fib(n);
return 0;
}
