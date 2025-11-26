#include<stdio.h>
int main(void)
{
	int k,l,m,n,d;
	scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
	int count=0;
	for(int i=d;i>0;i--)
	{
		if(i%k==0||i%l==0||i%m==0||i%n==0)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
