#include<stdio.h>
int main()
{
	int i,j,num1,num2,ture;
	int end, start,option,counter,perN,choice;
	int a,b,Rs,dollor,riyal;
	int t_loads,income ,bhata ,desal,tolls,extra,total_exp,net_income;
	float tex;
	do
	{
		printf("\n********************************");
		printf("\n******WELCOME IN MAIN MEANU*****");
		printf("\n********************************");
		printf("\n    1. Calculater ");
		printf("\n    2. Money convertor");
		printf("\n    3. Torlly system");
		printf("\n    4. Loop sense  ");
		printf("\n    5. Age finder ");
		printf("\n    6. Exit ");
		printf("\n       Enter your choice ");
		scanf ("%d",&choice);
		if(choice==1)
		{
			
			do{
			    printf("\n********************************");
			    printf("\n*****WELCOME IN CALCULATOR******");
				printf("\n********************************");
				printf(" \n    1. Add ");
				printf(" \n    2. sub ");
				printf(" \n    3. multiolyiecation ");
				printf(" \n    4. divid ");
				printf(" \n    5. back ");
				printf(" Enter you option ");
				scanf ("%d",&option);
				if(option==1)
				{
					printf("\n*****************************");
					printf("\nwelcome Addition Block");
					printf("\n*****************************");
					printf("\nEnter the 1st number ");
					scanf ("%d",&num1);
					printf("\nEnter the 2and number ");
					scanf ("%d",&num2);
					printf("\nAddition of %d+%d==%d",num1,num2,num1+num2);
				}	
				if(option==2)
				{
					printf("\n*****************************");
					printf("\nWelcome in subtarction Block");
					printf("\n*****************************");
					printf(" \nEnter the 1st number");
                    scanf ("%d",&num1);
					printf(" \nEnter the 2and number");
					scanf ("%d",&num2);
					printf("\nsubtsrction of %d-%d==%d",num1,num2,num1-num2);
			    }
			    if(option==3)
			    {
			    	printf("\n*****************************");
			        printf("\nWelcome in multiplcation Block ");
			        printf("\n*****************************");
			        printf("\nEnter the 1st number ");
			        scanf ("%d",&num1);
			        printf("\nEnter the 2nd number ");
			        scanf("%d",&num2);
			        printf("\nMultiplicatin of %d*%d==%d",num1,num2,num1*num2);
				}
				if(option==4)
				{
					printf("\n******************************");
					printf("\n Welcome in divid Block");
					printf("\n******************************");
					printf("Enter the 1st number ");
					scanf ("%d",&num1);
					printf("Enter the 2and number ");
					scanf ("%d",&num2);
					printf("Divid of %d/%d=%d",num1,num2,num1/num2);
				}
				if(option==5)
				{
					break;
				}
			}
			  while(ture);
		} // end of calculatter system //
		if(choice==2)
		{
			do
			{
				printf("\n**********************************");
				printf("\n****WELCOME IN MANOY CONVATOR*****");
				printf("\n**********************************");
				printf("\n    1. Rupees to Dollor");
				printf("\n    2. Dollor to Rupees");
				printf("\n    3. Riyal to Rupees ");
				printf("\n    4. Rupees to Riyal ");
				printf("\n    5. back");
				printf("\n    Enter your optaion ");
				scanf ("%d",&option);
				if(option==1)
				{
					printf("\n*****************************");
					printf("\n Welcome in Rupees to Dollor curency Block");
					printf("\n*****************************");
					printf(" \nEnter the Rupees  ");
					scanf ("%d",&Rs);
					dollor=170/Rs;
					printf(" \nRupees to Dollor %d will be %d ",Rs,dollor);
				}
				if(option==2)
				{
					printf("\n*****************************");
					printf("\nWelcame in Dollor to rupees curency Block ");
					printf("\n*****************************");
					printf("\nEnter the Dollor  ");
					scanf ("%d",&dollor);
					Rs=170*dollor;
					printf("\nDollor to rupees %d will be %d",dollor,Rs);
				}
				if(option==3)
				{
					printf("\n*******************************");
					printf("\nWelcome in conver Riyal to Rupees curncy Block");
                    printf("\n*******************************");
					printf("\nEnter the Riyal  ");
					scanf ("%d",&riyal);
					Rs=5*riyal;
					printf("\nRiyal to Rupees %d will be %d",riyal,Rs);
				}
				if(option==4)
				{
					printf("\n******************************");
					printf("\nwelcome in Rupees to riyal curency Block ");
					printf("\n******************************");
					printf("\nEnter the Rupees  ");
					scanf ("%d",&Rs);
					riyal=5/Rs;
					printf("\nRupees to riyal %d will be %d ",riyal,Rs);
				}
				if(option==5)
				{
				    break;
				}
			}
			while(ture);
		} // end of money conventer system
		if(choice==3)
		{
			printf("\n********************************");
			printf("\n*****WELCOME IN TOLLY INCOME****");
			printf("\n********************************");
			printf(" Enter  trolly loads ");
			scanf (" %d",&t_loads);
			//calculation of torlly bajet//
			income=t_loads*20000;
			desal = 150*20*t_loads;
			tolls =1000*t_loads;
			extra =2000*t_loads;
			tex   =5.6 *income/100;
			total_exp=bhata+desal+tolls+extra+tex;
			net_income=income-total_exp;
			printf("\nRent of trolly is    %d",income); 
			printf("\nDaiver Bhata is      %d ",bhata);
			printf("\ntrolly Diesel         %d ",desal);
			printf("\ntex of trolly is     %d",tex);
			printf("\nNet income of trolly %d",net_income);
		}// end of trolly system block//
		if(choice==4)
		{
			do
			{
				printf("\n*******************************");
				printf("\n*****WELOME IN LOOP SENSCE*****");
				printf("\n*******************************");
			    printf("\n    1. Even numbers ");
			    printf("\n    2. Odd  numbers ");
		    	printf("\n    3. Prime numbers ");
			    printf("\n    4. Finonic numbers");
     			printf("\n    5. Back ");
	    		printf("\n Enter the your option");
		    	scanf ("%d",&option);
			    if(option==1)
     			{
     				printf("\n*****************************");
			    	printf("\nWelcome in Even searies of Block");
			    	printf("\n*****************************");
				    printf("\nEnter start of even number  ");
				    scanf ("%d",&start);
				    printf(" \nEnter end of even number   ");
				    scanf ("%d",&end);
				   for(i=start;i<=end;i++)
			    	{
				    	if(i%2==0)
					   {
					    	printf("%d\n",i);
					   }
				    }
   			   }
			   if(option==2)
			   {
			   	    printf("\n*****************************");
			     	printf("\nWelcome in Odd srieaes of Block ");
			   	    printf("\n*****************************");
					printf("\nEnetr start of odd number");
				    scanf ("%d",&start);
				    printf("Enter end of Odd number");
			    	scanf ("%d",&end);
				   for(i=start;i<=end;i++)
				   { 
				    	if(i%2!=0)
					    {
						    printf("%d\n",i);
					    }
				   }
			   }
			   if(option==3)
			   {  
			     	printf("\n*****************************");
					printf("\nWelcome in prime serieas of Block\n");
				    printf("\n*****************************");
					printf(" \nEnter  strat of prime number");
				    scanf ("%d",&start);
				    printf("\nEnter end of prime number  ");
				    scanf ("%d",&end);
				    for(i=start;i<=end;i++)
				   {
					     counter=0;
					    for(num1=i;num1>=1;num1--)
					   {
					     	if(i%num1==0)
					    	{   
						    	counter=counter+1;
						    }
				       }
				       if(counter==2)
				       { 
				           printf("\n%d",i);
				       }
				    }
			    }
			    if(option==4)
			    {
			    	 printf("\n*****************************");
				     printf("\nWelcome in Foibonic sireases");
				     printf("\n*****************************");
				     printf("\nEnter start of integer number ");
				     scanf ("%d",&start);
				     printf("\nEnter the counter number ");
				     scanf ("%d",&counter);
				     for(i=start;i<=counter;i++)
				    {
					     printf("\n%d",num1);
					     perN=num1+num2;
					     num1=num2;
					     num2=perN;
				    }
		    	}	    			
		     	if(option==5)
		     	{
		           break;		
			    }
	        }
	        while(ture);
		}//end of sets of block//
		if(choice==5)
		{
			do
			{
				printf("\n*******************************");
				printf("\n*****WELCOME IN AGE FINDER*****");
				printf("\n*******************************");
				printf("\n   1. older Age");
				printf(" \n  2. Equal Age");
				printf("\n   3. younger Age ");	
			    printf("\n   4. Back ");		
		     	printf("\n   Enter your option ");		
				scanf ("%d",&option);
				if(option==1)
				{ 
				   printf("\n*****************************");
				   printf("\nWelcome in older Age ");
				   printf("\n*****************************");
				   printf("\nEnter Age of Noman");
				   scanf ("%d",&a);
				   printf("\nEnter Age of Anaya ");
				   scanf ("%d",&b);
				   if(a>b)
				   {
				   	  printf("Noman is older than Anaya ");
				   }
				   if(b>a)
				   {
				   	  printf("Anaya is older than Noman");
				   }
				}
				if(option==2)
				{
					printf("\n*****************************");
					printf("\nWelcome in equal Age Block");
					printf("\n*****************************");
					printf("\nEnetr Age of Noman");
					scanf ("%d",&a);
					printf("\nEnetr Age of anaya ");
					scanf ("%d",&b);
					if(a==b)
					{
						printf("Noman and anaya age is equal ");
					}
					if(a!=b)
					{
						printf("Noman and anaya age not equal ");
					}
				}
				if(option==3)
				{
					printf("\n*****************************");
					printf("\nWelcome in younger Age Block");
					printf("\n*****************************");
					printf("\nEnter Age of Noman");
					scanf ("%d",&a);
					printf("\nEnter Age of Anaya ");
					scanf ("%d",&b);
					if(a<b)
					{
						printf(" Noman is younger than Anaya ");
					}
					if(b<a)
					{
						printf(" Anaya is younger than Noman ");
					}
				}
				if(option==4)
				{
					break;
				}
			
			}
			while(ture);
		}
		if(choice==6)
		{
			break;
		}
    }
    while(ture);
		
}// program is end//









