#include<stdio.h>
#include <stdlib.h>

int main()
{
int row,col,arr[100][100],count1=0,count2=0,row_val,r,c,count=0;
scanf("%d %d",&row,&col);
for(r=0;r<row;r++)
{
    for(c=0;c<col;c++)
    {
        scanf("%d ",&arr[r][c]);
        if(arr[r][c]%2!=0)
        count2++;
        
    }
    if(count2>count){
        count=count2;
    row_val=r;
    }
    count2=0;
    
}
for(c=0;c<col;c++)
printf("%d ",arr[row_val][c]);

}
