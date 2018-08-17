/*In a given array of elements print the element which has the same unit digit of its immediate prevoius element*/ 

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[1000],index;
     scanf("%d",&n);
    for(index=0;index<n;index++)
    {
        scanf("%d ",&arr[index]);
       
    }
    for(index=1;index<n;index++)
    {
        int first,second;
        first=arr[index-1]%10;
        second=arr[index]%10;
        if(first==second)
        printf("%d ",arr[index]);
    }

return 0;
}
