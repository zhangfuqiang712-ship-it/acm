#include<stdio.h>
int main(void)
{
	double n,p[101],x=0;
	scanf("%lf",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&p[i]);
		x+=p[i]/100;
	}
	printf("%.12f",x/n*100);
	return 0;
}
