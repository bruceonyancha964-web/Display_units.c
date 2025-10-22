//Function to calculate electric bill
/*
Name:BRUCE ONYANCHA
Reg No:PA106/G/28827/25
Description:Program to calculate electic bill
*/

#include<stdio.h>

//function prototype
float calculateElectricBill(float units);

void main()
{
	float result,units;
	printf("Enter number of units used:");
	scanf("%f",& units);
	
	//function call
	result=calculateElectricBill(units);
	printf("The total bill is %.2f",result);
}

//function declaration
float calculateElectricBill(float units)
{
	float billAmount;
	billAmount=0;
	
	if (units< 0)
	{
		printf("Units cannot be negative");
	}
	else if(units>=1&&units<=100)
	{
        billAmount=units*10;
	}
	else if(units>=101&&units<=200)
	{
		billAmount=units*15;
	}
	else
	{
		billAmount=units*20;
	}
	
	return billAmount;
}