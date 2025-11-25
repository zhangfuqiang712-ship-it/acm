#include<stdio.h>
int main(void)
{
	long long n,k;
	scanf("%I64d %I64d",&n,&k);
	long long a=(n+1)/2;
		if(k<=a)
		{
			printf("%I64d",k*2-1);
		}
		else
		{
			printf("%I64d",(k-a)*2);
		}
	return 0;
}
