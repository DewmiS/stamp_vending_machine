#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,m,n;

    printf("Enter no. of rows and columns of the first table: ");
    scanf(" %d %d", &m,&n);
    int a[m][n];

    printf("\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("Enter values to the first table! ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    int x[n][1];
    for (k=0; k<n; k++)
        {
            printf("Enter values to the second table! ");
            scanf("%d", &x[k][0]);
        }

    int product[m][1];
    int sum=0;
    for (i=0; i<m; i++)
    {
        for(j=0; j<1; j++)
        {
            for(k=0; k<n; k++)
            {
                sum = sum + a[i][k] * x[k][j];
            }
            product[i][j] = sum;
            sum=0;
        }
    }

    printf("\nTable A\n");
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("|%d| ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nTable X\n");
    for (i=0; i<n; i++)
        {
            printf("|%d| \n",x[i][0]);
        }
        printf("\n");

    printf("Result table\n");
    for (i=0; i<m; i++)
        {
            printf("|%d| \n",product[i][0]);
        }
        printf("\n\n");

    return 0;
}
