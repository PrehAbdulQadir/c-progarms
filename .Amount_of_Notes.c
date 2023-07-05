#include<stdio.h>
int main()
{
	int Amount,N_100000,N_5000,N_1000,N_100,N_50;
	int R_100000,R_5000,R_1000,R_100,R_50;
	
	printf("  Enter the Amount   ");
	scanf("%d",&Amount);
	
	N_100000=Amount/100000;
	R_100000=Amount%100000;
	N_5000=  R_100000/5000;
	R_5000=  R_100000%5000;
	N_1000=  R_5000/1000;
	R_1000=  R_5000%1000;
	N_100 =   R_1000/100;
	R_100 =   R_1000%100;
	N_50  =	  R_100/50;	
	R_50  =   R_100%50;
	
	printf("    \nNotes of one lack  %d",N_100000);  
	printf("    \nNotes of five thousand  %d",N_5000);
	printf("    \nNotes of one thousand   %d",N_1000);
	printf("    \nNotes  of hundred   %d",N_100);
	printf("    \nNotes of fifty Rupees  %d",N_50);
	
}
