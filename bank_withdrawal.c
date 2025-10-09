/*
Name:Gerishon Kamau Karanja
Reg:PA106/G/29211/25
Description:program for bank withdrawal
*/

#include<stdio.h>

//main function

int main(){
	float balance,withdraw,remaining_balance;
	
	//prompt for user to enter balance
	printf("Enter your balance:\n");
	scanf("%f",&balance);
	
	//conditions for withdrawal
	while(balance>0){
		printf("Enter amount to withdraw:\n");
		scanf("%f",&withdraw);
		
		remaining_balance=balance-=withdraw;
		printf("remaining_balance is %.2f\n",remaining_balance);
		
		if(balance<=0){
			printf("your account balance is zero or negative.no further withdrawal allowed.");
		}
	}
	
	return 0;
	
	
}