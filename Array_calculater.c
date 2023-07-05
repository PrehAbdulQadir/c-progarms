#include<stdio.h>
void main()
{
	int n1[6]={100,200,300,40,50,60};
	int n2[6]={60,50,40,30,20,10};
	int add[6];
	int choice,ture;
	    do
	    {
		   printf(" Welcome in array of calculater  system");
		   printf(" 1 Add\n");
		   printf(" 2 Sub\n");
		   printf(" 3 multiplicatin\n ");
		   printf(" 4 Divid\n");
		   printf(" 5 Exit\n");
	       printf(" Enter you choice");
	       scanf ("%d",&choice);
	       if(choice==1)
		   {
		       //calculation
		      printf("Welcome in Addition Block");
	          add[0]=n1[0]+n2[0];
	          add[1]=n1[1]+n2[1];
              add[2]=n1[2]+n2[2];
	          add[3]=n1[3]+n2[3];
	          add[4]=n1[4]+n2[4];
  	          add[5]=n1[5]+n2[5];
	           
			  printf("\nAddition of n1[%d]+n2[%d]==add[%d]",n1[0],n2[0],add[0]);
			  printf("\nAddition of n1[%d]+n2[%d]==add[%d]",n1[1],n2[1],add[1]);
			  printf("\nAddition of n1[%d]+n2[%d]==add[%d]",n1[2],n2[2],add[2]);
			  printf("\nAddition of n1[%d]+n2[%d]==add[%d]",n1[3],n2[3],add[3]);
			  printf("\nAddition of n1[%d]+n2[%d]==add[%d]",n1[4],n2[4],add[4]);
			  printf("\nAddition of n1[%d]+n2[%d]==add[%d]",n1[5],n2[5],add[5]);
			}
			if(choice==2)
			{
				printf(" Welcome in Subtsrction Block ");
				add[0]=n1[0]-n2[0];
				add[1]=n1[1]-n2[1];
				add[2]=n1[2]-n2[2];
				add[3]=n1[3]-n2[3];
				add[4]=n1[4]-n2[4];
				add[5]=n1[5]-n2[5];
				
				printf("\nsutarction of n1[%d]-n2[%d]==add[%d]",n1[0],n2[0],add[0]);
				printf("\nsutarction of n1[%d]-n2[%d]==add[%d]",n1[1],n2[1],add[1]);
				printf("\nsutarction of n1[%d]-n2[%d]==add[%d]",n1[2],n2[2],add[2]);
				printf("\nsutarction of n1[%d]-n2[%d]==add[%d]",n1[3],n2[3],add[3]);
				printf("\nsutarction of n1[%d]-n2[%d]==add[%d]",n1[4],n2[4],add[4]);
				printf("\nsutarction of n1[%d]-n2[%d]==add[%d]",n1[5],n2[5],add[5]);
			}
			if(choice==3)
			{
				printf("Welcome in multipliction Block");
				add[0]=n1[0]*n2[0];
				add[1]=n1[1]*n2[1];
				add[2]=n1[2]*n2[2];
				add[3]=n1[3]*n2[3];
				add[4]=n1[4]*n2[4];
				add[5]=n1[5]*n2[5];
				
				printf("\nMultiplictino of n1[%d]*n2[%d]==add[%d]",n1[0],n2[0],add[0]);
				printf("\nMultiplictino of n1[%d]*n2[%d]==add[%d]",n1[1],n2[1],add[1]);
				printf("\nMultiplictino of n1[%d]*n2[%d]==add[%d]",n1[2],n2[2],add[2]);
	    		printf("\nMultiplictino of n1[%d]*n2[%d]==add[%d]",n1[3],n2[3],add[3]);  	
				printf("\nMultiplictino of n1[%d]*n2[%d]==add[%d]",n1[4],n2[4],add[4]);
				printf("\nMultiplictino of n1[%d]*n2[%d]==add[%d]",n1[5],n2[5],add[5]);
				
			}
			if(choice==4)
			{
				printf(" Welcome in Diviesion Block");
				add[0]=n1[0]/n2[0];
				add[1]=n1[1]/n2[1];
				add[2]=n1[2]/n2[2];
				add[3]=n1[3]/n2[3];
				add[4]=n1[4]/n2[4];
				add[5]=n1[5]/n2[5];
				
				printf(" \ndiviesion of n1[%d]/n2[%d]==add[%d]",n1[0],n2[0],add[0]);
				printf(" \ndiviesion of n1[%d]/n2[%d]==add[%d]",n1[1],n2[1],add[1]);
				printf(" \ndiviesion of n1[%d]/n2[%d]==add[%d]",n1[2],n2[2],add[2]);
				printf(" \ndiviesion of n1[%d]/n2[%d]==add[%d]",n1[3],n2[3],add[3]);
				printf(" \ndiviesion of n1[%d]/n2[%d]==add[%d]",n1[4],n2[4],add[4]);
				printf(" \ndiviesion of n1[%d]/n2[%d]==add[%d]",n2[5],n2[5],add[5]);
			}
			if(choice==5)
			{ 
			     break;
			}
	   }
	     while(ture);	
	
}

