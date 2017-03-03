#include <stdio.h>
int main()
{
	int a[3][2]={{1,2,3},{3,2,1}};
	int final[2][3];
	int i,j,temp ;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			final[i][j]=a[j][i];
			printf("final[%d][%d]=%d\n",i,j,final[i][j]);
		}
	}
	
}

//¤£·|
 
