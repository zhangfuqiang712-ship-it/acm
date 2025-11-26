#include<stdio.h>
int main(void)
{
	long long n,a,b,t;
	scanf("%lld",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%lld",&n);
		printf("%lld\n",(n-1)/2);
	}
	return 0;
}
