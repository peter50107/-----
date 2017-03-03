#include <stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int lon,sum,b,avg;
	lon=sizeof(a)/sizeof(a[0]);
	for(b=0;b<lon;b++)
	{
		sum=sum+a[b];
	}
	avg=sum/lon;
	printf("%d\n",avg);
}
