#include<stdio.h>
void main()
{
	int marks;
	printf("Entre you marks ");
	scanf("%d",&marks);
	if(marks==100)
	{
		printf("your Gread is A1");
	}
	else if(marks>=80 && marks<100)
	{
		printf("your Gread is A+");	
	}
	else if(marks>=60 && marks<70)
	{
		printf("your Gread is B");
	}
	else if(marks>=40 && marks<50)
	{
		printf("your Gread is c");
	}
	else if(marks>=30 && marks<40)
	{
		printf("your Gread is D");
	}
	else{
		printf("your Fail  ");
	}
}
