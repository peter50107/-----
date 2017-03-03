#include <stdio.h>
#include <math.h>
int main()
{
	int map[]={1,4,16};
	int final[1];
	int lon,i;
	lon =sizeof(map)/sizeof(0);
	for(i=0;i<lon;i++)
	{
		final[i]=sqrt(map[i]);
		printf("final[%d]=%d\n",i,final[i]);
	}
}
