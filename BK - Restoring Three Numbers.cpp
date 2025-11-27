#include<stdio.h>
int main(void)
{
	long long a,b,c,d,x1,x2,x3,x4,sum;
	scanf("%lld %lld %lld %lld",&x1,&x2,&x3,&x4);
	sum=(x1+x2+x3+x4)/3;
	a=sum-x1;
	b=sum-x2;
	c=sum-x3;
	d=sum-x4;
	if(a==0)
	printf("%lld %lld %lld",b,c,d);
	if(b==0)
	printf("%lld %lld %lld",a,c,d);
	if(c==0)
	printf("%lld %lld %lld",b,a,d);
	if(d==0)
	printf("%lld %lld %lld",b,c,a);
	return 0;
}
