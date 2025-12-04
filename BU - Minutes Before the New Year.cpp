#include<stdio.h>
int main(void)
{
	int hour,mintue,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&hour,&mintue);
		int a=23-hour;
		int b=60-mintue;
		printf("%d\n",60*a+b);
	}
	return 0;
}
