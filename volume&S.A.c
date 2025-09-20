/*
Name:Gerishon Kamau Karanja
Reg:PA106/G/29211/25
Description:program to compute volume&surface area of cylinder
S.A=2*r*r+2*pi*r*h
v=pi*r*r*h
*/

#include<stdio.h>
//main function

int main(){
	//variable declaration
	float pi,radius,height,surface_area,volume;
	
	//prompt user to enter pi
	printf("\n enter pi:");
	scanf("%f",&pi);
	
	//prompt user to enter radius
	printf("\n enter radius:");
	scanf("%f",&radius);
	
	//prompt user to enter height
	printf("\n enter height:");
	scanf("%f",&height);
	
	// surface area&volume
	volume=pi*radius*radius*height;
	surface_area=2*pi*radius*radius+2*pi*radius*height;
	
	//display surface area
	printf("\n volume is %.4f",volume);
	printf("\n surface_area is %.4f",surface_area);
	
	
	return 0;
		
}