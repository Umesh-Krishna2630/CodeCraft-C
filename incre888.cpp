#include<stdio.h>
int main()
{
	int i=5;
	printf("%d%d%d",++i,i++,++i);
	return 0;
	
}//priority is the reason for the output 888
