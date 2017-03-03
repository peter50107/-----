#include <stdio.h>
int main()
{
	int a,b,c;
	printf("請輸入") ;
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
		printf("不是質數");
	}else
	{
		printf("是質數");
	}
}
