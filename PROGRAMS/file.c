#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];
    int i;

    fp=fopen("bmsce.txt", "w");
    printf(" enter something about bmsce: ");
    gets(str);
    fprintf(fp, "%s", str);
    fp= fopen("C:\\Users\\Nitya\\OneDrive\\Documents\\BMSCE\\physics cycle\\CCP\\lab exam\\bmsce.txt", "r");
    printf(" read data: ");
    fscanf(fp, "%s", str);
    printf("\n %s", str);
    fclose(fp);

    return 0;
}

