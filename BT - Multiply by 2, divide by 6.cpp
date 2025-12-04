#include<stdio.h>
int main(void)
{
	long long t,n;
	scanf("%lld",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%lld",&n);
		long long a=0,b=0;
		while(n%2==0)
		{
			a++;
			n=n/2;
		}
		while(n%3==0)
		{
			b++;
			n=n/3;
		}
		if(n!=1||a>b)
		{
			printf("-1\n");
			continue;
		}
		printf("%lld\n",2*b-a);
	}
	return 0;
}
