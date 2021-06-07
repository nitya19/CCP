#include<stdio.h>
 int time(int h, int m)
{
    int p;
    p= (h*60) + m;
    return p;
}
 int main()
{
      int hrs, mins, p;
      printf("enter hours : ");
      scanf("%d", &hrs);
      printf("enter mins : ");
      scanf("%d", &mins);
      p = time(hrs, mins);
      printf("\nTotal Time in Minutes:\t%d\n", p );
      return 0;
}
