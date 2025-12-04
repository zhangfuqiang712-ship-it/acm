#include<stdio.h>
int main(void)
{
	long long t;
	scanf("%lld",&t);
	for(int i=0;i<t;i++)
	{
		int n,condy[100],sum=0;
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			scanf("%d",&condy[j]);
			sum+=condy[j];
		}
		int x2=sum-n;
		int y1=n-x2;
		if(y1%2!=0)
		{
			printf("NO\n");
		}
		else if(x2%2!=0&&y1==0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}
