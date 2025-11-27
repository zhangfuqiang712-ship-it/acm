#include<stdio.h>
#include<math.h>
int main(void)
{
	long long t;
	scanf("%lld",&t); 
	for(int i=0;i<t;i++)
	{
		long long a=0,b=0,c=0;
		scanf("%lld %lld",&a,&b);
		c=abs(a-b); 
		c=(c+9)/10;
		printf("%lld\n",c);
	} 
	return 0;
}
