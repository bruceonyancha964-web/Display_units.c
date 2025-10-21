//Function to calculate fare
/*
Name:BRUCE ONYANCHA
Reg No:PA106/G/28827/25
Description:Program to calculate fare
*/

//function prototype
#include <stdio.h>
float calculateFare(float distance, float rate);
 rate=50;

void main()
{
	float result,distance,rate;
	rate=50;
	printf("Enter distance travelled in (km)");
	scanf("%f",&distance);
	
	//function call
	result=calculateFare(distance,rate);
	printf("Fare to be paid is Ksh%.2f",result);
	
	return 0;
}

//function declaration
float calculateFare(float distance, float rate)
{
	float fare;
	fare=distance*rate;
	return fare;
}
