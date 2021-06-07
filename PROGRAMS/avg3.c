#include <stdio.h>
int average(int n1, int n2, int n3);
int main()
{
    int num1, num2, num3, avg;
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);
    printf("enter the third number: ");
    scanf("%d", &num3);
    avg=average(num1, num2, num3);
    printf(" the average is: %d",avg);
    return(0);
}
int average(int n1,int n2,int n3)
{
    return((n1+n2+n3)/3);
}
