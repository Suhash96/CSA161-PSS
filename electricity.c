#include <stdio.h>
int main()
{
	int u,a;
	printf("Enter the number of units used :");
	scanf("%d",&u);
	if(u<=1000)
	{
		a=300;
	}
	else if(u<=2000)
	{
		a=300+(u-1000)*0.0275;
	}
	else if(u<=3000)
	{
		a=300+(u-1000)*0.0275+(u-2000)*0.03;
	}
	else
	{
		a=300+(u-1000)*0.0275+(u-2000)*0.03+(u-3000)*2;
	}
	printf("The Electricity Bill is : %d",a);
	return 0;
}
