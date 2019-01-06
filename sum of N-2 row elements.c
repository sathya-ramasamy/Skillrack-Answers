#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,row,col,sum=0,arr[100][100];
scanf("%d",&n);
for(row=0;row<n;row++)
{
    for(col=0;col<n;col++)
    {
        scanf("%d ",&arr[row][col]);
    }
    
}
for(row=0;row<n;row++)
{
    for(col=0;col<n;col++)
    {
        if(row==1||row==n-2)
        {
        sum=sum+arr[row][col];
        //printf("%d ",arr[row][col]);
        }
    }
}
printf("%d",sum);

}
