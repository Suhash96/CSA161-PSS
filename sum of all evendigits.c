#include<stdio.h>
int main()
{
int n;
int sum=0;
printf("enter the number");
scanf("%d",&n);
for(int i=0;i<=n;i=i+2)
{
printf("%d ",i);
sum=sum+i;
}
printf("sum=%d",sum);
}
