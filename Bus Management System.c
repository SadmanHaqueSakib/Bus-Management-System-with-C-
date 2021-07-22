#include<stdio.h>
#include<conio.h>
char name[20],from[15],to[15];
int s,p,money;
booking()
{
	printf("\n==================================================");
	printf("\n\t****Bus Management System****");
	printf("\n==================================================");
	printf("\n Jalandhar to Delhi \n Delhi to Kolkata \n Delhi to Chennai \n Delhi to Jalandhar \n Chandigarh to Delhi \n Chennai to Delhi \n Mumbai to Delhi \n Jaipur to Delhi");
	printf("\n");
	printf("\nFrom:");
	scanf("%s",&from);
	printf("\nTo:");
	scanf("%s",&to);
	if(from=="Jalandhar" && to=="Delhi" || from=="Delhi" && to=='Kolkata' || from=='Delhi' && to=='Chennai' || from=='Delhi' && to=='Jalandhar' || from=='Chandigarh' && to=='Delhi' || from=='Chennai' && to=='Delhi' || from=='Mumbai' && to=='Delhi' || from=='Jaipur' && to=='Delhi')
	{
		printf("\nEnter your name here:");
		gets(name);
		if(from=="Jalandhar" && to=="Delhi")
		{
			printf("\nPrice:950");
			printf("\nDuration:7h 45m");
			printf("\nHow much money you have:");
			scanf("%d",&money);
			if(money>950)
			{
				printf("\nIf you want to buy ticket then press 1:");
				scanf("%d",&p);
				if(p==1)
				{
					printf("\nYour Ticket Booking Successfully.");
					printf("\nIf you want to see your ticket then press 1:");
					scanf("%d",&s);
					if(s==1)
					{
						printf("\n===================================");
						printf("\n\t******Bus Ticket******");
						printf("\n===================================");
						printf("\nName:%s",name);
						printf("\nFrom:Jalandhar\nTo:Delhi");
						printf("\nPNR No:4563894");
						printf("\nprice:950\nBooking Confirm.");
					}
					else
					{
						printf("\nThanks for Booking.");
					}
				}
				else
				{
					printf("\nThanks for using our system.");
				}
			}
			else
			{
				printf("\nDon't have enough money.");
			}
		}
		else if(from=='Delhi' && to=='Kolkata')
		{
			printf("\nPrice:1950");
			printf("\nDuration:17h 30m");
			printf("\nHow much money you have:");
			scanf("%d",&money);
			if(money>1950)
			{
				printf("\nIf you want to buy ticket then press 1:");
				scanf("%d",&p);
				if(p==1)
				{
					printf("\nYour Ticket Booking Successfully.");
					printf("\nIf you want to see your ticket then press 1:");
					scanf("%d",&s);
					if(s==1)
					{
						printf("\n\t===================================");
						printf("\n******Bus Ticket******");
						printf("\n\t===================================");
						printf("\nName:%s",name);
						printf("\nFrom:Delhi\nTo:Kolkata");
						printf("\nPNR No:4567594");
						printf("\nprice:1950\nBooking Confirm.");
					}
					else
					{
						printf("\nThanks for Booking.");
					}
				}
				else
				{
					printf("\nThanks for using our system.");
				}
			}
			else
			{
				printf("\nDon't have enough money.");
			}
		}
		else if(from=='Delhi' && to=='Chennai')
		{
			printf("\nPrice:2950");
			printf("\nDuration:26h 45m");
			printf("\nHow much money you have:");
			scanf("%d",&money);
			if(money>2950)
			{
				printf("\nIf you want to buy ticket then press 1:");
				scanf("%d",&p);
				if(p==1)
				{
					printf("\nYour Ticket Booking Successfully.");
					printf("\nIf you want to see your ticket then press 1:");
					scanf("%d",&s);
					if(s==1)
					{
						printf("\n\t===================================");
						printf("\n******Bus Ticket******");
						printf("\n\t===================================");
						printf("\nName:%s",name);
						printf("\nFrom:Delhi\nTo:Chennai");
						printf("\nPNR No:4568094");
						printf("\nprice:2950\nBooking Confirm.");
					}
					else
					{
						printf("\nThanks for Booking.");
					}
				}
				else
				{
					printf("\nThanks for using our system.");
				}
			}
			else
			{
				printf("\nDon't have enough money.");
			}
		}
		else if(from=='Delhi' && to=='Jalandhar')
		{
			printf("\nPrice:950");
			printf("\nDuration:7h 45m");
			printf("\nHow much money you have:");
			scanf("%d",&money);
			if(money>950)
			{
				printf("\nIf you want to buy ticket then press 1:");
				scanf("%d",&p);
				if(p==1)
				{
					printf("\nYour Ticket Booking Successfully.");
					printf("\nIf you want to see your ticket then press 1:");
					scanf("%d",&s);
					if(s==1)
					{
						printf("\n\t===================================");
						printf("\n******Bus Ticket******");
						printf("\n\t===================================");
						printf("\nName:%s",name);
						printf("\nFrom:Delhi\nTo:Jalandhar");
						printf("\nPNR No:4763894");
						printf("\nprice:950\nBooking Confirm.");
					}
					else
					{
						printf("\nThanks for Booking.");
					}
				}
				else
				{
					printf("\nThanks for using our system.");
				}
			}
			else
			{
				printf("\nDon't have enough money.");
			}
		}
		if(from=='Chandigarh' && to=='Delhi')
		{
			printf("\nPrice:3050");
			printf("\nDuration:7h 45m");
			printf("\nHow much money you have:");
			scanf("%d",&money);
			if(money>3050)
			{
				printf("\nIf you want to buy ticket then press 1:");
				scanf("%d",&p);
				if(p==1)
				{
					printf("\nYour Ticket Booking Successfully.");
					printf("\nIf you want to see your ticket then press 1:");
					scanf("%d",&s);
					if(s==1)
					{
						printf("\n\t===================================");
						printf("\n******Bus Ticket******");
						printf("\n\t===================================");
						printf("\nName:%s",name);
						printf("\nFrom:Chandigarh\nTo:Delhi");
						printf("\nPNR No:45638954");
						printf("\nprice:3050\nBooking Confirm.");
					}
					else
					{
						printf("\nThanks for Booking.");
					}
				}
				else
				{
					printf("\nThanks for using our system.");
				}
			}
			else
			{
				printf("\nDon't have enough money.");
			}
		}
		else if(from=='Chennai' && to=='Delhi')
		{
			printf("\nPrice:2950");
			printf("\nDuration:26h 45m");
			printf("\nHow much money you have:");
			scanf("%d",&money);
			if(money>2950)
			{
				printf("\nIf you want to buy ticket then press 1:");
				scanf("%d",&p);
				if(p==1)
				{
					printf("\nYour Ticket Booking Successfully.");
					printf("\nIf you want to see your ticket then press 1:");
					scanf("%d",&s);
					if(s==1)
					{
						printf("\n\t===================================");
						printf("\n******Bus Ticket******");
						printf("\n\t===================================");
						printf("\nName:%s",name);
						printf("\nFrom:Chennai\nTo:Delhi");
						printf("\nPNR No:4568634");
						printf("\nprice:2950\nBooking Confirm.");
					}
					else
					{
						printf("\nThanks for Booking.");
					}
				}
				else
				{
					printf("\nThanks for using our system.");
				}
			}
			else
			{
				printf("\nDon't have enough money.");
			}
		}
		else if(from=='Mumbai' && to=='Delhi')
		{
			printf("\nPrice:4050");
			printf("\nDuration:37h 45m");
			printf("\nHow much money you have:");
			scanf("%d",&money);
			if(money>4050)
			{
				printf("\nIf you want to buy ticket then press 1:");
				scanf("%d",&p);
				if(p==1)
				{
					printf("\nYour Ticket Booking Successfully.");
					printf("\nIf you want to see your ticket then press 1:");
					scanf("%d",&s);
					if(s==1)
					{
						printf("\n\t===================================");
						printf("\n******Bus Ticket******");
						printf("\n\t===================================");
						printf("\nName:%s",name);
						printf("\nFrom:Mumbai\nTo:Delhi");
						printf("\nPNR No:45637544");
						printf("\nprice:4050\nBooking Confirm.");
					}
					else
					{
						printf("\nThanks for Booking.");
					}
				}
				else
				{
					printf("\nThanks for using our system.");
				}
			}
			else
			{
				printf("\nDon't have enough money.");
			}
		}
		else if(from=='Jaipur' && to=='Delhi')
		{
			printf("\nPrice:3200");
			printf("\nDuration:32h 45m");
			printf("\nHow much money you have:");
			scanf("%d",&money);
			if(money>3200)
			{
				printf("\nIf you want to buy ticket then press 1:");
				scanf("%d",&p);
				if(p==1)
				{
					printf("\nYour Ticket Booking Successfully.");
					printf("\nIf you want to see your ticket then press 1:");
					scanf("%d",&s);
					if(s==1)
					{
						printf("\n\t===================================");
						printf("\n******Bus Ticket******");
						printf("\n\t===================================");
						printf("\nName:%s",name);
						printf("\nFrom:Jaipur\nTo:Delhi");
						printf("\nPNR No:443037544");
						printf("\nprice:3200\nBooking Confirm.");
					}
					else
					{
						printf("\nThanks for Booking.");
					}
				}
				else
				{
					printf("\nThanks for using our system.");
				}
			}
			else
			{
				printf("\nDon't have enough money.");
			}
		}
		else
		{
			printf("Bus are Repairing");
		}
	}
	else
	printf("Buses Not Found.");
}
int main()
{
	int choice;
	while (1)
	{
		printf("\n===================================");
		printf("\n\t******Welcome******");
		printf("\n===================================Sadman");
		printf("\n1.Booking\n2.exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				booking();
				break;
			case 2:
				exit(0);
				break;
			default:
				printf("Invaild Choice.");
		}
	}
}

