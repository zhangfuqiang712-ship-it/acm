#include<stdio.h>
#include<math.h>
int main(void)
{
	int x1,x2,x3,max,min;
	scanf("%d %d %d",&x1,&x2,&x3);
	max=x1;
	min=x1;
	if(x2>max) max=x2;
	if(x3>max) max=x3;
	if(x2<min) min=x2;
	if(x3<min) min=x3;
	printf("%d",max-min);
	return 0;
}
