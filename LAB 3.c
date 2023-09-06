#include<stdio.h>
#define METERCHARGE 100
int main()
{
	char cust_name[25];
	int units;
	float charges,surcharge=0,bill_amt;
	printf("ENTER THE CUSTOMER NAME: \n");
	scanf("%s",&cust_name);
	printf("\nENTER THE NUMBER OF UNITS CONSUMED: \n");
	scanf("%d",&units);
	if(units<=200)
		charges = 0.80*units+ METERCHARGE;
	else if(units<=300)
		charges = 0.80*200+(units-200)*0.90+METERCHARGE;
	else
		charges = 0.80*200+ 0.90*100+1.00*(units-300)+METERCHARGE;
	if (charges >400)
		surcharge = 0.15*charges;
		
	bill_amt = charges + surcharge;
	printf("\n******ELECRTRICITY  BILL******\n");
	printf("\nCUTOMER NAME : %s ",cust_name);
	printf("\nTOTAL CONSUMED UNITS : %d",units);
	printf("\nBILL AMOUNT = %0.2f",bill_amt);
	 
}




































