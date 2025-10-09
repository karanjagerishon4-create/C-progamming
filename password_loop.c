/*
Name:Gerishon Kamau karanja
Reg:PA106/G/29211/25
Description:loop program to enter password
*/


#include <stdio.h>
#include <string.h>

//main function

int main() {
	//variable declaration
    char password[20];
    
    //prompt to enter password
    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "3291") != 0);

    printf("Access Granted\n");

    return 0;
}