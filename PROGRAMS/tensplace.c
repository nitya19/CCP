#include <stdio.h>
int main()
{
    int n, tensdig;
    printf("enter a number: ");
    scanf("%d", &n);
    tensdig= (n%100)/10;
    printf(" the digit in tens place is: %d", tensdig);
    return 0;

}
