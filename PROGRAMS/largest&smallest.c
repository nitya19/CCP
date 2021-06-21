#include <stdio.h>
int main()
{
    int a[5], large, small, lpos, spos, i, temp;
    printf("enter the elements: ");
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    large=a[0];
    small=a[0];
    lpos=0;
    spos=0;
    for(i=1; i<5; i++)
    {
        if(a[i]>large)
        {
            large=a[i];
            lpos=i;
        }
        if (a[i]<small)
        {
            small=a[i];
            spos=i;
        }

        }
    temp=a[lpos];
    a[lpos]=a[spos];
    a[spos]=temp;
    printf(" interchanged array is: ");
    for(i=0; i<5; i++)
        printf("\n %d", a[i]);

}
