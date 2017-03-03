#include <stdio.h>
int factoria(int a)
{
	int i;
	int sum=1;
	for(i=1;i<a+1;i++)
	{
		sum=sum*i;
	}
return sum;
}
int main()
{
	int b;
	printf("½Ð¿é¤J");
	scanf("%d",&b);
	printf("factoria(%d)=%d\n",b,factoria(b));
}
