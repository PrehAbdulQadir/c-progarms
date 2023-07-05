#include<stdio.h>
void main()
{
	int factor=1,a,num;
	printf(" Factorial any number   ");
	scanf ("%d",&num);
	for(a=factor;a<=num;a++)
	{
		factor=factor*a;
	}
	
	    printf("\nFactorial of =%d",factor);
		
}
