#include <stdio.h>
int main()
{
	long long num;
	scanf("%lld",&num);
	if(num%2==0)
	{
		printf("%lld\n",num/2);
	}
	else
	{
		printf("%lld",(num+1)/-2);
	}
	return 0; 
}
