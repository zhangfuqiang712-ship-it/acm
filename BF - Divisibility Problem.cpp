#include<stdio.h>
int main(void)
{
	long long n,a,b;
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld %lld",&a,&b);
			if(a<=b)
			{
				printf("%lld\n",b-a);
			}
			else if(a%b==0)
			{
				printf("0");
			}
			else
			{
				printf("%lld\n",b-(a%b));
			}
	}
	return 0;
}
