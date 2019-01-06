#include<stdio.h>
#include <stdlib.h>

int main()
{
int m,n,i,j,k=0,arr[100][100],l;
char str[100];
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d ",&arr[i][j]);
    }
}
scanf("%s",str);
l=strlen(str);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(arr[i][j]==0){
        printf("%c ",str[k]);
        k++;}
        else
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}

}
