#include<stdio.h>
int main(void)
{
	long long t,n,x,y,k;
	scanf("%lld",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%lld %lld %lld",&x,&y,&n);
		long long b=(n-y)/x;
		long long k=b*x+y;
		printf("%lld\n",k);
	}
	return 0;
}
