#include<stdio.h>
int main(void)
{
	int n,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		int num[40];
		int ou_shu=0,ji_shu=0;
		for(int j=0;j<a;j++)
		{
			scanf("%d",&num[j]);
			if(j%2==0)
			{
				if(num[j]%2!=0)
				ou_shu++;
			}
			else
			{
				if(num[j]%2==0)
				ji_shu++;
			}
		}
		if(ou_shu==ji_shu)
		{
			printf("%d\n",ou_shu);
		}
		else
		{
			printf("-1\n");
		}
	}
	return 0;
}
