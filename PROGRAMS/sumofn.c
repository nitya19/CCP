#include<stdio.h>
int sum(int n)
{
   int x = 0, i=1;
   while (i<=n)
   {
    x=x+i;
   i++;}
   return x;}

  int main()
{
   int p, result;
   printf(" Enter a number up to which you want to find sum: ");
   scanf("%d", &p);
   result = sum(p);
   printf("sum until %d is = %d " ,p, result);
}
