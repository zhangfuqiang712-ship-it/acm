#include<stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int n,a[50],ji_num=0,ou_num=0;
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			if(a[j]%2==0)
			ou_num++;
			else
			ji_num++;
		}
		if(ji_num%2!=0)
		printf("NO\n");
		else
		printf("YES\n");
	}
	return 0;
}
