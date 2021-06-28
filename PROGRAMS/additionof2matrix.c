#include<stdio.h>
int main()
{
 int row1, col1, row2, col2,i, j,rowsum,colsum;
 int mat1[5][5] , mat2[5][5], sum[5][5];
 printf("Enter the number of rows in the first matrix: ");
 scanf("%d", &row1);
 printf("Enter the number of cols in the first matrix: ");
 scanf("%d", &col1);
 printf("Enter the number of rows in the second matrix: ");
 scanf("%d", &row2); //2
 printf("Enter the number of cols in the second matrix: ");
 scanf("%d", &col2); //2
 if(row1 !=row2 || col1 != col2)
 {
    printf ("\n The number of rows and cols of both the matrices should be same ");
    return(0);
 }
 rowsum=row1;
 colsum=col1;
 printf("\n Elements of first matrix: ");
 for (i=0; i<row1; i++)
 for (j= 0; j < col1; j++)
 scanf("%d", &mat1[i][j]);
 printf("\n Elements of second matrix: ");
 for (i= 0; i< row2; i++)
 for (j= 0; j < col2; j++)
 scanf("%d", &mat2[i][j]);
 for (i= 0; i< rowsum; i++)
 {
    for (j= 0; j < colsum; j++)
 {
 sum[i][j] = mat1[i][j] + mat2[i][j];

 }
 }
 printf("\n Sum of entered matrices : ");
 for (i= 0; i < rowsum; i++)
 {
 printf("\n");
 for (j = 0; j < colsum; j++)
 printf("%d\t", sum[i][j]);
 }
 return 0;
}
