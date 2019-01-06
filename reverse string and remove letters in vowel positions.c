#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int length;
    length=strlen(str);
    int index;
    int vowel_index=0;
    int j,k=0;
    int flag=0;
    int b[100];
for(index=0;index<length;index++)
{
    if(str[index]=='a'||str[index]=='A'||str[index]=='e'||str[index]=='E'||str[index]=='i'||str[index]=='I'||str[index]=='o'||str[index]=='O'||str[index]=='u'||str[index]=='U'){
    b[vowel_index]=index;
    vowel_index++;}
}
for(index=length-1;index>=0;index--)
{
    for(j=0;j<vowel_index;j++)
    {
        if(k==b[j])
        {
            flag=1;
            break;
            
        }
       
    }
    k++;
    if(flag!=1)
    printf("%c",str[index]);
    flag=0;
}

}
