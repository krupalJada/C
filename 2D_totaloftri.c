#include<stdio.h>
int main()
{
	int a[5][5],i,j,sum1=0,sum2=0,sum3=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]);			
		}		
		printf("\n ");
	}	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			if(i<j)
			{
				sum1=sum1+a[i][j];
			}
			else if(i>j)
			{
				sum2=sum2+a[i][j];
			}
			else 
			{
				sum3=sum3+a[i][j];
			}			
		}		
		printf("\n ");
	}
		printf("\n total of upper triangle : %d",sum1);
		printf("\n total of lower triangle : %d",sum2);
		printf("\n total of cross line : %d",sum3);
		
	return 0;

}