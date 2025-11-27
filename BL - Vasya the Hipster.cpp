#include<stdio.h>
#include<math.h>
int main(void)
{
	int red,blue;
	scanf("%d %d",&red,&blue);
	int x1=abs(red-blue);
	int xiha=(red+blue-x1)/2;
	int max=red;
	if(blue>max) max=blue;
	int putong=(max-xiha)/2;
	printf("%d %d",xiha,putong);
	return 0;
}
