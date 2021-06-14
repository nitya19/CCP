#include <stdio.h>
int main()
{
    int i,m, n;
    printf(" enter the lower limit: ");
    scanf("%d", &m);
    printf(" enter the upper limit: ");
    scanf("%d", &n);
    for(i=m; i<=n; i++)
    {
        if (i%2==0)
            printf("\n %d", i);

    }

}
