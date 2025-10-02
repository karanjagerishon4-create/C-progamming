/*
Name:Gerishon kamau
Reg:PA106/G/29211/25
Description:program for the purchase of mobile data
*/

#include<stdio.h>

//main function

int main(){
	int choice;
	
	//Display of data offers
	printf("data offers.\n");
	
	printf("1:100MB-ksh50\n");
	
	printf("2:500MB-ksh200\n");
	
	printf("3:1GB-ksh350\n");
	
	printf("4:2GB-ksh600\n");
	
	//prompt to enter choice
	printf("Enter your choice (1-4):\n");
	scanf("%d",&choice);
	
	//switch statement
	switch(choice){
		case 1:
		printf("you selected 100MB.cost=ksh50");
		break;
	
	    case 2:
	    printf("you selected 500MB.cost=ksh200");
	    break;
	
	    case 3:
	    printf("you selected 1GB.cost=ksh350");
	    break;
	
	    case 4:
	    printf("you selected 2GB.cost=ksh600");
	    break;
	
	    default:
  	     printf("invalid choice,please select a number between 1 and 4");
  	     
  	     
	}
	
	return 0;
	
	
}