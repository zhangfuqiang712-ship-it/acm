#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int a=n/2;
	if(n<=3)
	{
		printf("1\n");
		printf("%d",n);
	}
	else
	{
		printf("%d\n",a);
		for(int i=1;i<a;i++)
		{
			int count=0;
			printf("2 ");
			n=n-2;
		}
		printf("%d",n);
	}
	return 0;
}
