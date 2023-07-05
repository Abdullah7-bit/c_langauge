#include <stdio.h>

int main() {
	printf("\t \t \t \t \t \t ------------- \n");
	printf("\t \t \t \t \t \t Shadman Hotel \n");
	printf("\t \t \t \t \t \t ------------- \n");
	printf("\n");


	// variables
	
	// menu and price
	char food1 [10] = "Biryani";
	char food2 [10] = "Pizza";
	char ad [7] = "and";
	int bir_p = 200;
	int piz_p = 500;

	
	// order details
	int order;
	int order1;
	int order2;
	char order_details[30];
	int initial_bill=0;
	int final_bill = 0;

	// discounts and offers
	char dis_per;
	char offer1[20] = "Daily Offer 5%";
	char offer2[30] = "Ramzan Special Offer 10%";
	int selected_offer;
	char y[2] = "y";
	char n[2] = "n";




	printf("\n Here Look At the MENU \n");
	printf("\n 1. %s \n",food1);
	printf("\n 2. %s \n",food2);

	printf("\n Place your order by entering the serial number of item: ");
	scanf("%d", &order);

	// conditions

	if (order == 1) {
		
		initial_bill = bir_p;
		
		printf("\n ------------------------- \n");
		printf("\n Your Initial Bill is: %d \n", initial_bill );
		printf("\n Item Ordered: %s \n", food1 );
		printf("\n ------------------------- \n");

	}
	if(order == 2) {
		
		initial_bill = piz_p;
		
		printf("\n ------------------------- \n");
		printf("\n Your Initial Bill is: %d \n", initial_bill );
		printf("\n Item Ordered: %s \n", food2);
		printf("\n ------------------------- \n");

	}
	if(order == 12) {
		initial_bill = bir_p + piz_p;
		
		printf("\n ------------------------- \n");
		printf("\n Your Initial Bill is: %d  \n", initial_bill );
		printf("\n Item Ordered: %s %s %s \n", food1 , ad , food2);
		printf("\n ------------------------- \n");
	} 
	// discounts

	printf("\n Do you want Discount Offers (Enter [y] for yes / [n] for no): ");
	scanf("%s", &dis_per);

	if(dis_per == 'y') {
		printf("\n Here are currntly Available Discounts: \n");

		printf("\n 1. %s \n", offer1);
		printf("\n 2. %s \n", offer2);

		printf("\n Select ONE offer by serial number: ");
		scanf("%d", &selected_offer);

		if(selected_offer == 1) {
			float daily_offer= 0.05;
			final_bill = initial_bill-(initial_bill * daily_offer);
			
			printf("\n Your Final Bill is: %d \n", final_bill);

		} if(selected_offer == 2){
			float ramzan_offer= 0.1;
			final_bill = initial_bill-(initial_bill * ramzan_offer);
			
			printf("\n ------------------------- \n");
			printf("\n Your Final Bill is: %d \n", final_bill);
			printf("\n ------------------------- \n");
		}

	} if(dis_per == 'n') {
		printf("\n ------------------------- \n");
		printf("\n Your Final Bill is: %d \n", initial_bill );
		printf("\n ------------------------- \n");
	} 

	
	





}
