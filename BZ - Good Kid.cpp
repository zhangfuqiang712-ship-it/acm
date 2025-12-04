#include<stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int n,a[9],min=10,b=0;
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			if(a[j]<min)
			{
				min=a[j];
				b=j;
			}
		}
		a[b]=a[b]+1;
		long long sum=a[0];
		for(int j=1;j<n;j++)
		{
			sum*=a[j];
		}
		printf("%d\n",sum);
	} 
	return 0;
}
