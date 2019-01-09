#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[1000][1000];
    int count[1000];
    int i,j,c=0,max=0,l,n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s\n",str[i]);
        l=strlen(str[i]);
        for(j=0;j<l;j++)
        {
            if(str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U'||str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
            c++;
        }
        count[i]=c;
        //printf("%d ",count[i]);
        c=0;
    }
    int ans=0;
    for(i=0;i<n;i++)
    {
        if(count[i]>max){
        max=count[i];
        ans=i;
        }
    }
    printf("%s",str[ans]);
    
}
