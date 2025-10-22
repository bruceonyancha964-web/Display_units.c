//Function to convert temperature to celcius
/*
Name:BRUCE ONYANCHA
Reg No:PA106/G/28827/25
Description:Program to convert temperature to celcius
*/

#include <stdio.h>

//function prototype
float convertToCelcius(float temp);

void main()
{
	float result,temperature;
	printf("Enter temperature in (F)");
	scanf("%f",&temperature);
	
	//function call
	result=convertToCelcius(temperature);
	printf("The temperature is (C) %.2f",result);
	
}

//function declaration
float convertToCelcius(float temp)
{
float celcius;
celcius=((temp-32)*(5.0/9.0));
return celcius;	
} 
