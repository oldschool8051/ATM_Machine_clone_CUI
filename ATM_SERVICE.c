#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define CLRSCR
int pass=9285;
float cash=500;
void balance_check()
{
	int pin;
	printf("Enter the correct ATM-PIN: ");
	scanf("%d",&pin);
	if(pin==pass)
	{
		printf("\tYOUR NET ACCOUNT BALANCE IS: RS %.2f",cash);
	}
	else
	{
		printf("\tsorry!!!!!!your ATM-PIN is incorecct!!!!!!!");
	}
}
void deposite_money()
{
	float x;
	int pin;
	printf("Enter the correct ATM-PIN: ");
	scanf("%d",&pin);
	if(pin==pass)
	{
		printf("\nEnter the amount of money you want to deposite: RS ");
		scanf("%f",&x);
		cash=cash+x;
		printf("\t\tAmount credited Sucessfully!!!!!");
	}
	else
	{
		printf("\tsorry!!!!!!your ATM-PIN is incorecct!!!!!!!");
	}
}
void withdraw_money()
{
	int pin,amount;
	printf("Enter the correct ATM-PIN: ");
	scanf("%d",&pin);
	if(pin==pass)
	{
		printf("\tEnter the amount of money you want to withdraw: RS ");
		scanf("%d",&amount);
		if(amount%100==0)
		{
			if(amount<=cash)
			{
				cash=cash-amount;
				printf("\t\tCollect your cash and count to Ensure.");
			}
			else
			{
				printf("\t\tPlzz Enter the amount less than cash!!!!");
			}
		}
		else
		{
			printf("\t\tPlzz Enter the amount in multiple of RS 100 !!");
		}
	}
	else
	{
		printf("\tsorry!!!!!!your ATM-PIN is incorecct!!!!!!!");
	}
}
main()
{
	system("COLOR A");
	printf("************************WELCOME TO NATIONAL BANK OF INDIA***************************");
	int ch;
	while(1)
	{
		int a;
		printf("\nPRESS '1' for Continue and any other key to exit.");
	    scanf("%d",&a);
	    if(a==1)
	    {
		printf("\npress '1' for BALANCE CHECK.\npress '2' for DEPOSITE MONEY.\npress '3' for WITHDRAW MONEY.\npress '4' for EXIT.");
		printf("\n\tENTER THE OPTIONS AS PER YOUR CHOICE: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:balance_check();
			       break;
			case 2:deposite_money();
			       break;  
			case 3:withdraw_money();
			       break;
			case 4:exit(0);
			default:printf("\t\tuff!!Enter a valid key!!!!!");	   	        
		}
	}
	else
	{
		break;
	}
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^THANKS FOR USING OUR ATM SERVICE^^^^^^^^^^^^^^^^^^^^^^^^^^^");
}}
