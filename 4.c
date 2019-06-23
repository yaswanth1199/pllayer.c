#include<stdio.h>
int main()
{
    int c;
   int a,i;
   scanf("%d",&a);
   
    char s[10];
   scanf("%s",s);
   for(i=a-1;i>-1;--i)
   {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
        printf("");
    }
    else 
    {
        printf("%c",s[i]);
    }
    
   }

    }
