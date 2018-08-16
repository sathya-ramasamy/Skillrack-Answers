#include<stdio.h>
#include <stdlib.h>

int main()
{

char str[1000],ch;
int n,i,count=0;
scanf("%s %c",str,&ch);
for(i=0;i<strlen(str);i++)
{
    if( (str[i]==ch)  &&  (i%2==0) )
    count++;
}
printf("%d",count);
}
