#include <stdio.h>
int main()
 {
	int x, i=1;
	printf("enter any number: ");
	scanf("%d", &x);
	while (i<=100)
    {
         if((i%x==0))
            printf("\n%d", i);
         i++;
    }}
