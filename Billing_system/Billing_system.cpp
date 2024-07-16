#include <stdio.h>

int main()
{
	printf("\t\t\t\t Shadman Store ");
	printf("\n");
	printf("\n");
	// welcome

	// variables

	char food1[20] = "Biryani";
	char food2[20] = "Pizza";

	int bir_p = 100;
	int piz_p = 200;

	int order;

	//	Initial Bill
	int ini_bill;

	//	Discounts
	char disc1[20] = "Daily Offer 5%";
	char disc2[30] = "Ramzan Special Offer 10%";
	int discount;

	float offer1_value = 0.05;
	float offer2_value = 0.1;

	// main body

	printf("\n Look At the Menu: \n");
	printf("\n 1. %s \n", food1);
	printf("\n 2. %s \n", food2);

	printf("\n Place your order by entering the serial number of item: ");
	scanf("%d", &order);

	// conditions
	if (order == 1)
	{
		printf("--------------- \n Your Initial  Bill is: %d \n---------------", bir_p);
	}
	if (order == 2)
	{
		printf("--------------- \n Your Initial  Bill is: %d \n---------------", piz_p);
	}
	if (order == 12)
	{
		printf("--------------- \n Your Initial  Bill is: %d \n---------------", bir_p + piz_p);
	}
	else
	{
		printf("\n Please Select an Item. \n");
	}

	// discount offers list
	printf("\n Here are currntly Available Discounts: \n");
	printf("\n 1. %s \n", disc1);
	printf("\n 2. %s \n", disc2);

	printf("\n Select ONE offer by serial number: \n");
	scanf("%d", &discount);

	if (order == 1, discount == 1)
	{

		printf("--------------- \n Your final Bill is: %f \n---------------", bir_p - (bir_p * offer1_value));
	}
	if (order == 1, discount == 2)
	{

		printf("--------------- \n Your final Bill is: %f \n---------------", bir_p - (bir_p * offer2_value));
	}
	else
	{
		printf("");
	}

	//	printf("--------------- \n Star Consumer \n---------------");

	//	printf("\n  \n");
	//	printf("");
	//	printf("");
	//	printf("");

	return 0;
}
