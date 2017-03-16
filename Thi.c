#include <stdio.h>
int main()
{
	int a,b,c;
	printf("½Ð¿é¤J") ;
	scanf("%d",&a);
	for(c=a;c>0;c--)
	{
		if(a%c==0)
		{
			b+=1;
		}
	}
	if(b>2 || b==1 || b==0)
	{
		printf("¤£¬O½è¼Æ");
	}else
	{
		printf("¬O½è¼Æ");
	}\\\66666
}
