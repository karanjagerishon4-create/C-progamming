/*
Name:Gerishon kamau Karanja
Reg:PA106/G/29211/25
Description:program to prompt user to enter ID no,height,bank balance
*/

#include<stdio.h>

//main function

int main(){
	float identity_number,height,bank_balance;
	
	//prompt to enter identity number
	printf("Enter your identity number:");
	scanf("%f",&identity_number);
	
	//prompt to enter height
	printf("\n Enter your height:");
	scanf("%f",&height);
	
	//prompt to enter bank_balance
	printf("\n Enter your bank_balance:");
	scanf("%f",&bank_balance);
	
	
    //display height,identity number,bank balance
    printf("\n identity_number is %.2f",identity_number);
    
    printf("\n height is %.2fcm",height);
    
    printf("\n bank_balance is ksh%.2f",bank_balance);
    
	return 0;
	
}