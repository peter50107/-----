#include <stdio.h>
int main()
{
	int a,b,c;
	printf("�п�J") ;
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
		printf("���O���");
	}else
	{
		printf("�O���");
	}
}
