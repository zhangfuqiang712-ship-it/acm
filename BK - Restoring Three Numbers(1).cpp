#include<stdio.h>
int main(void)
{
	long long x[4],max=-100;
	for(int i=0;i<4;i++)
	{
		scanf("%lld",&x[i]);
		if(x[i]>max)
		{
			max=x[i];
		}
	}
	for(int i=0;i<4;i++)
	{
		int a=max-x[i];
		if(a!=0)
		{
			printf("%d ",a);
		}
	}
	return 0;
}
