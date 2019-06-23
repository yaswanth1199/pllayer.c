#include<stdio.h>
int main()
{
    int a,i,n,sum=0;
    scanf("%d",&a);
    while(i!=0)
    {
        n=a%10;
        i=a/10;
        a=i;
        sum=sum+n*n;
        
    }
    printf("%d",sum);
}
