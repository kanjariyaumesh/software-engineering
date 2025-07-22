#include<stdio.h>
main()
{
	int choice,pizza,burger,sandwitch;
	int sum1=0,sum2=0,sum3=0;
	int price1=100,price2=50,price3=70;
	int total;
	char add;
	do
	{
	
	printf("\t\t\t\t************ welcome to food station ************\n\n\n");
	
	
	printf("\t******menu******\n");
	printf("1. pizza = 100 Rs.%d\n",price1);
	printf("2. burger = 50 Rs.\n",price2);
	printf("3. sandwich = 70 Rs.\n",price3);
	
	
	printf("what do you want ?\n\n\n");
	printf("enter 1 for : pizza\n");
	printf("enter 2 for : burger\n");
	printf("enter 3 for : sandwich\n");
	
	scanf("%d",&choice);



	switch(choice)
	{
		case 1:printf("pizza\n");
		printf("how many pizza you want ?\n");
		scanf("%d",&pizza);
		printf("your bill is:%d\n",sum1=price1*pizza);
			
	
	    break;

		
		case 2:printf("burger\n");
		printf("how many burger you want ?\n");
		scanf("%d",&burger);
		printf("your bill is:%d\n",sum2=price2*burger);
	    break;

		
		case 3:printf("sandwitch\n");
		printf("how many sandwitch you want ?\n");
		scanf("%d",&sandwitch);
		printf("your bill is:%d\n",sum3=price3*sandwitch);
	    break;

	}
		printf("enter y to add iteam : ");
		scanf(" %c", &add);
}
while(add == 'y');
printf("your total bill is :%d",total=sum1+sum2+sum3);

	
	
}
