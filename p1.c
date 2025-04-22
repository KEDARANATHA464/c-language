//   1
//   2 2
//   3 3 3
//   4 4 4 4
//   5 5 5 5 5 


#include<stdio.h>
void main()
{
	int i,j;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i%2==0)
			printf("%d ",1+i);
			else
			printf("%d ",1+i);
		}
		printf("\n");
	}
}
