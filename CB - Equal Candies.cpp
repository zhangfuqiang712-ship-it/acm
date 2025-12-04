#include<stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int n;
		long long a[50],min=1e7,sum=0;
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
			if(a[j]<min) min=a[j];
			sum+=a[j];
		}
		printf("%lld\n",sum-n*min);
	}
	return 0;
}
