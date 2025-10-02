//Simple program to calculate water bill
/*
Name:BRUCE ONYUANCHA
Reg No:PA106/G/28827/25
Description:Program to calculate water bill

0-30Units=20KES per unit
31-60Units=25KES per unit
Above 60Units=30KES per unit
*/
#include <stdio.h>

int main(){
	float units,billAmount;
	
	//taking unit used from user
	printf("Enter units used\t");
	scanf("%f",& units);
	
	//calculating bill amount
	if(units<0) {
		printf("units cannot be negative");
	}
	else if(units>=0 && units<=30){
		billAmount=units*20;
	}
	else if(units>=31 && units<=60){
		billAmount=units*25;
	}
	else{
		billAmount=units*30;
	}

	//displaying total bil
	printf("Your total bill is:%2f KES\n", billAmount);
	return 0;
}