//Program to print factorial number using
#include<stdio.h>

int facorial (int a)
{
  if (a == 0 || a == 1)
    return 1;
  else
    return a * facorial(a-1);
}
 int main()
 {
    int n;
   printf("Enter a number:\n");
   scanf("%d",&n);

   printf("Factorial = %d\n", facorial(n));
return 0;
 }
