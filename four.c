#include <stdio.h>
int main()
{
	int a[10]={1,2,4,5,6,7};
	int b,temp,i;
	printf("請輸入");
	scanf("%d",&b);
	
	
	for(i=0;i<6;i++)
	{
		if(b<a[i])
		{
			temp=a[i];
			a[i]=b;
			b=temp;
		}
		
		printf("a[%d]=%d\n",i,a[i]);	
		
	}
}
//7不見啦
 
