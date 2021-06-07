#include <stdio.h>
#include <math.h>
int area(int a,int b, int c);
int main()
{
  int a1, b1, c1, area1;

  printf("Enter the sides of the triangle: ");
  scanf("%d %d %d", &a1, &b1, &c1);
  area1 = area(a1, b1, c1);
  printf("\nArea of the triangle= %d", area1);
  return 0;
}

int area(int a,int b,int  c)
{
  int s, area;
  s = (a+b+c)/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  return area;
}
