void main()
{
	int T_loods,incame,bahta,desal,tolls,extra,total_exp;
	float tex ;
	int net_incame;
	printf("  Enter trolly loods  ");
	scanf("%d",& T_loods);

	incame=T_loods*20000;
	bahta=T_loods*2000;
	desal=150*20*T_loods;
	tolls=T_loods*1000;
	extra=T_loods*2000;
	tex  = incame*5.6/100;
	total_exp=bahta+desal+tolls+extra+tex;
	net_incame=incame-total_exp;
	
	printf("  \nRent of trolly is %d",incame); 
    printf("  \nDaiver bahta is   %d",bahta);                   	
	printf("  \nTrolly desal camzupation is %d",desal);
	printf("  \nTolls expensive is %d",tolls);
	printf("  \nExtra expensive is %d",extra);
	printf("  \nNET incame of trolly %d",net_incame);
	
	
	
	
	
	
	
	
	
	
	
	
	
}
