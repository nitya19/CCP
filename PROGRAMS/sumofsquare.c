#include <stdio.h>
int main()
{

    int n,i,sum=0;
    printf(" enter the value of n: ");
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        if (i%2 !=0)
            sum=sum+(i*i);
    }
    printf("the sum is= %d", sum);


}
