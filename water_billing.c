/*
Name:Gerishon Kamau
Reg:PA106/G/29211/25
Description:program to calculate charges for water units consumed
*/

#include<stdio.h>

//main function

int main(){
	float units_consumed,total_bill;
	
	//charges display
	printf("consumption charges rules:\n");
	
	printf("i:(0-30) units=ksh20 per unit\n");
	
	printf("ii:(31-60) units=ksh25 per unit\n");
	
	printf("iii:Above 60 units=ksh30 per unit\n");
	
	//prompt to enter units_consumed
	printf("Enter water units consumed:\n");
	scanf("%f",&units_consumed);
	
	//conditions display
	if(units_consumed<0){
		printf("invalid,please enter only positive numbers");
		
    }else if(units_consumed<=30){
		total_bill=units_consumed*20;
		printf("total_bill:ksh%.2f\n",total_bill);
		
	}else if(units_consumed>30 && units_consumed<=60){
		total_bill=(30*20)+((units_consumed-30)*25);
		printf("total_bill:ksh%.2f\n",total_bill);
		
	}else if(units_consumed>60){
		total_bill=(30*20)+(30*25)+((units_consumed-60)*30);
		printf("total_bill:ksh%.2f\n",total_bill);
		
	}
	
	return 0;
	
}