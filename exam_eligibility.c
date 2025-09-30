//final exam eligibility test

/*
Name:Gerishon kamau karanja
Reg:PA106/G/29211/25
Description:program to check exam eligibility of a student
*/

#include<stdio.h>

//main function 

int main(){
	float attendance,average_marks;
	
	//prompt to enter attendance
	printf("Enter attendance:\n");
	scanf("%f",&attendance);
	
	//prompt to enter average_marks
	printf("Enter average_marks:\n");
	scanf("%f",&average_marks);
	
	//conditions for eligibility
	if(attendance>=0.75 &&average_marks>=40){
		printf("you are eligible for the exam");
	}else{
		printf("you are not eligible for the exam");
	}
	
	return 0;
	
}