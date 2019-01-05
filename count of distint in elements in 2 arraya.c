#include<stdio.h>
#include <stdlib.h>

int main()
{

int l1,l2,count1=0,count2=0,i,a[100],b[100],count,flag=1,j;
scanf("%d %d",&l1,&l2);
for(i=0;i<l1;i++)
{
    scanf("%d ",&a[i]);
}
scanf("\n");
for(i=0;i<l2;i++)
{
    scanf("%d ",&b[i]);
}
for(i=0;i<l1;i++)
{
    for(j=0;j<l2;j++)
    {
    if(a[i]==b[j])
    {
    flag=0;
    //break;;
    }
    
    }
    if(flag==1)
    count1++;
    flag=1;
    
    
}
flag=1;
for(i=0;i<l2;i++)
{
    for(j=0;j<l1;j++)
    {
    if(b[i]==a[j])
    flag=0;
    }
    if(flag==1)
    count2++;
    flag=1;
}
count=count1+count2;
printf("%d ",count);
}
