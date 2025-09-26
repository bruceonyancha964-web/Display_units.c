/*
Name:BRUCE MOKAYA
Reg No:PA106/G/28827/25
*/
#include <stdio.h>// pe-processor directive

int main(){
	int age;//%d
	float annual_income;//%f
	
	printf("Enter your age");
	scanf("%d",&age);
	
	printf("Enter your annual_income");
	scanf("%f",&annual_income);

	if(age>=21&& annual_income>=21000){
	printf("Congratulations you qualify for a loan\n");
	}
	else{
	printf("Unfortunately, we are unable to offer you a loan at this time\n");
	}
	return 0;
}