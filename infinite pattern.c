#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    int a[n][n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d ",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i][i]);
    }
    for(i=n-2;i>=0;i--)
    {
        printf("%d ",a[i][n-1]);
    }
    k=n-2;
    for(i=1;i<n;i++)
    {
        printf("%d ",a[i][k]);
        k--;
    }
    for(i=n-2;i>=0;i--)
    {
        printf("%d ",a[i][0]);
    }


}
