#include<stdio.h> 
#include "functions.h"

void printMenu() {


	printf("Choose A Number: ");
	printf("1.Vehicles");
	printf("2.Services");
	printf("3.Parts");
	printf("4.Personnel");
	printf("5.Vendors");
	printf("6.Options");

	int option;
	printf("Enter Your Choice: ");
	scanf("%d", &option);

	switch (option) {
	case 1:
		printf("Vehicles");
		manageVehicles();
		break;
	case 2:
		manageServices();
		break;
	case 3:
		manageParts();
		break;
	case 4:
		managePersonnel();
		break;
	case 5:
		manageVendors();
		break;
	case 6:
		options();
		break;
	default:
		printf("Invalid Choice!");
		break;
	
	
	}
}