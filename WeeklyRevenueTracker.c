/*
Name:BRUCE MOKAYA
Reg No:PA106/G/28827/25
*/

#include <stdio.h>

int main()
{
	float revenue[7];
	float total=0.0,average;
	int i;
	
	//Input revenue for each day
	printf("Enter revenue for each day of the week\n");
	for(i=0; i<7; i++){
		printf("Day %d:",i+1);
		scanf("%f", &revenue[i]);
		total +=revenue[i];
	}
		
		//calculate average
		average=total/7;
		
		//Display results
		printf("Total weekly revenue:%.2f\n",total);
		printf("Average daily revenue:%.2f",average);
		
		return 0;
	}

	
	
