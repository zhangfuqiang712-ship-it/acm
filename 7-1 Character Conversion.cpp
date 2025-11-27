#include<stdio.h>
#include<string.h>
int main(void)
{
char arr[81];
gets(arr);
long long num=0;
int len=strlen(arr);
for(int i=0;i<len;i++)
{
if(arr[i]>='0'&&arr[i]<='9')
{
num=num*10+(arr[i]-'0');
}
}
printf("%lld",&num);
return 0;
}
