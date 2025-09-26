/*
Name:BRUCE ONYANCHA
Reg No:PA106/G/28827/25
*/
#include <stdio.h>
//main function

int main(){
	//variable declaration
	float radius,height,surface_area,volume,pi;
	pi=3.142;
	
	//taking input from user
	printf("Enter the radius of the cylinder in(cm)");
	scanf("%f",&radius);
	
	printf("Enter the height of the cylinder in (cm)");
	scanf("%f",&height);
	
	//calculating surface area
	surface_area=2*(pi*radius*radius)+(2*pi*radius*height);
	volume=pi*radius*radius*height;
	
	//printing the result
	printf("\nsurface areaof cylinder:%.2fcm^2",surface_area);
	printf("\nvolume of the cylinder:%.2fcm^3",volume);

	return 0;
}