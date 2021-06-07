#include <stdio.h>
int square(int n, int sq);
int main()
{
    int n1, sq1;
    printf("enter a number to be squared: ");
    scanf("%d", &n1);
    sq1=square(n1,sq1);
    return 0;
}
int square(int n, int sq)
{
    sq=n*n;
    printf("the square is: %d", sq);

}
