#include<stdio.h>
int main(void)
{
	long long n,t;
	scanf("%lld",&t);
	for(long long i=0;i<t;i++)
	{
		scanf("%lld",&n);
		printf("%lld\n",n/2);
	}
	return 0;
}
