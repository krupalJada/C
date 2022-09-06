#include<iostream>
int main()
{
	char i,j,a=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
            
			if(a%2!=0)
			std::cout<<" "<<1;
			else
			std::cout<<" "<<0;
            a++;
			
		}
		printf(" \n");

	}
}