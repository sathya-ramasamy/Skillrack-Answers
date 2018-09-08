#include<stdio.h>
#include <stdlib.h>

int main()
{int n,a[50][50],i,j;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d ",&a[i][j]);
    }
    printf("\n");
}
for(i=-0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i>=j)
        {
            printf("%d ",a[i][j]);
        }
        
        
    }
    printf("\n");
}


}
