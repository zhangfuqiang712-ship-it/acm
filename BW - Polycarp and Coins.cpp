#include<stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		long long n;
		scanf("%lld",&n);
		int a=n%3;
		if(a==0)
		printf("%lld %lld\n",n/3,n/3);
		if(a==1)
		printf("%lld %lld\n",n/3+1,n/3);
		if(a==2)
		printf("%lld %lld\n",n/3,n/3+1);
	}
	return 0;
}
