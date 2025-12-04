#include<stdio.h>
int main(void)
{
	long long t,n,a;
	scanf("%lld",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%lld",&n);
		long long max=0,min=1e9; 
		for(int j=0;j<n;j++)
		{
			scanf("%lld",&a);
			if(a>max)
			max=a;
			if(a<min)
			min=a;
		}
		printf("%lld\n",max-min);
	}
	return 0;
}
