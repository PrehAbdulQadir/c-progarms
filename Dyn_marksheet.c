




































#include<stdio.h>
 void main() 
{

	int turboc,English,Maths,IC,AP,obidaint;
	float per;
	
	printf("\nEnter your turbo c mark  ");
	scanf("  %d",&turboc);

	printf("\nEnter your English marks  ");
	scanf("  %d",&English);
		
	printf("\nEnter your Maths marks   ");
	scanf(" %d ",&Maths);
	
	printf("\nEnter your IC marks      ");
	scanf(" %d",&IC);
	
	printf("\nEnter your AP marks      ");
	scanf(" %d",&AP);
	
	obidaint=turboc+English+Maths+IC+AP;
	per=obidaint*100/500;
	
	printf("\n --------------------------------------------------------------");
	printf("\n --------------------------------------------------------------");
	printf("\n     your turboc marks are =====================%d ",turboc);
	printf("\n     your English marks are ====================%d ",English);
	printf("\n     your maths marks are ======================%d ",Maths);
	printf("\n     your IC marks are  ========================%d ",IC);
	printf("\n     your AP marks are  ========================%d ",AP);
	printf("\n     your obidaint marks are ===================%d ",obidaint);
	printf("\n     your persentage is ========================%f ",per); 
	printf("\n--------------------------------------------------------------");
	printf("\n--------------------------------------------------------------");
}
