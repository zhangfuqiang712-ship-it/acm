#include<stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int max=(a>b)?a:b;
		int min=(a<b)?a:b;
		if(min*2>=max)
		{
			printf("%d\n",min*min*4);
		}
		else if(min*2<max)
		{
			printf("%d\n",max*max);
		}
	}
	return 0;
}
