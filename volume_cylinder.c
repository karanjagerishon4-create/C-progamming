/*
name:Gerishon Kamau Karanja
Reg:PA106/G/29211/25
Description:Program to compute volume of cylinder
            and surface area
v=pi*r*r*h
*/

#include<stdio.h>

//main function

int main(){
	//variable declaration
	float pi,radius,height,volume;
	
	//prompt user to enter pi
	printf("enter pi:");
	scanf("%f",&pi);
	
	//prompt user to enter radius
	printf("\n enter radius:");
	scanf("%f",&radius);
	
	//prompt user to enter height
	printf("\n enter height:");
	scanf("%f",&height);
	
	//volume 
	volume=pi*radius*radius*height;
	
	//diplay volume
	printf("\n volume is %.4f",volume);
	
	return 0;
	
}