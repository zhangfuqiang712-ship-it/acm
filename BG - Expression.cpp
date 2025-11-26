#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int p1=a+b+c;
	int p2=(a+b)*c;
	int p3=a*(b+c);
	int p4=a*b*c;
	int max=p1;
	if(p2>max)
	max=p2;
	if(p3>max)
	max=p3;
	if(p4>max)
	max=p4;
	printf("%d\n",max);
	return 0;
}
