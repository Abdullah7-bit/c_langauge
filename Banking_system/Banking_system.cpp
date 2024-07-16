#include <stdio.h>
#include <string.h>
#include <iostream>
using std::string;

//struct Banks
//{
//	char branch[50];
//	char name[50];
//	int account_number;
//	int account_balance;
//	int account_tax;
//};

class Banks{
	private:
		string Branch;
		string Name;
		int AccountNumber;
		int AccountBalance;
		int AccountTax;
	public:
		// Branch Get and Set
		string getBranch(){
			return Branch;
		};
		void setBranch(string branch){
			Branch = branch;
		};

		// Name get set
		string getName(){
			return Name;
		};
		void setName(string name){
			Name = name;
		};
		
		// Account Number Get and Set
		int getAccountNumber(){
			return AccountNumber;	
		};
		void setAccountNumber(int accountnumber){
			AccountNumber = accountnumber;	
		};
		
		// Account Balance Get and Set
		int getAccountBalance(){
			return AccountBalance;	
		};
		void setAccountBalance(int accountbalance){
			AccountBalance = accountbalance;	
		};
		
		// Account Tax Get and Set
		int getAccountTax(){
			return AccountTax;	
		};
		void setAccountTax(int accountTax){
			AccountTax = accountTax;	
		};
		
		// Constructor
		Banks(string branch, string name, int accountnumber){
			Branch = branch;
			Name = name;
			AccountNumber = accountnumber;	
		};
		void Introduction(){
			std::cout << "Branch - "	<< Branch<< std::endl;
			std::cout << "Name - "	<< Name << std::endl;	
			std::cout << "AccountNumber - "	<< AccountNumber<< std::endl;
		};
};

int main(int argc, char** argv)
{
	
	Banks Meezan =  Banks("Main Street","Meezan",101987);
	Meezan.Introduction();
	
	
	return 0;
	
	/*
	 Previous Code Base on Struct and Procedure Programming
	 	
	*/
//	int selected_branch;
//
//	Banks korangi;
//	Banks landhi;
//	Banks shah_Faisal;
//	Banks malir;
//	Banks DHA;
//
//	printf("\n List of All Branches: \n");
//	printf("\n 1. Korangi \n");
//	printf("\n 2. Landhi \n");
//	printf("\n 3. Shah_Faisal \n");
//	printf("\n 4. Malir \n");
//	printf("\n 5. DHA \n");
//	printf("\n 6. All Branches \n");
//
//	printf("\n Enter [number] -> to select branch: ");
//	scanf("%d", &selected_branch);
//
//	if (selected_branch == 1)
//	{
//
//		// korangi branch
//		printf("\n");
//		printf("\n------ Korangi Branch ------\n");
//		strcpy(korangi.name, "Noman");
//		korangi.account_number = 9881;
//		korangi.account_balance = 10000;
//		korangi.account_tax = 500;
//
//		printf("\n Customer Name: %s \n", korangi.name);
//		printf("\n Account Number: %d \n", korangi.account_number);
//		printf("\n Account Balance: %d \n", korangi.account_balance);
//		printf("\n Tax on Account: %d \n", korangi.account_tax);
//		printf("\n --------------------------- \n");
//	}
//	else
//	{
//		if (selected_branch == 2)
//		{
//			// landhi branch
//			printf("\n");
//			printf("\n------ Landhi Branch ------\n");
//			strcpy(landhi.name, "Bilal");
//			landhi.account_number = 7881;
//			landhi.account_balance = 80000;
//			landhi.account_tax = 1000;
//
//			printf("\n Customer Name: %s \n", landhi.name);
//			printf("\n Account Number: %d \n", landhi.account_number);
//			printf("\n Account Balance: %d \n", landhi.account_balance);
//			printf("\n Tax on Account: %d \n", landhi.account_tax);
//			printf("\n --------------------------- \n");
//		}
//		else
//		{
//			if (selected_branch == 3)
//			{
//				// shahfaisal branch
//
//				printf("\n");
//				printf("\n------ Shah Faisal Branch ------\n");
//				strcpy(shah_Faisal.name, "Rehman");
//				shah_Faisal.account_number = 6881;
//				shah_Faisal.account_balance = 50000;
//				shah_Faisal.account_tax = 1500;
//
//				printf("\n Customer Name: %s \n", shah_Faisal.name);
//				printf("\n Account Number: %d \n", shah_Faisal.account_number);
//				printf("\n Account Balance: %d \n", shah_Faisal.account_balance);
//				printf("\n Tax on Account: %d \n", shah_Faisal.account_tax);
//				printf("\n --------------------------- \n");
//			}
//			else
//			{
//				if (selected_branch == 4)
//				{
//					// malir branch
//
//					printf("\n");
//					printf("\n------ Malir Branch ------\n");
//					strcpy(malir.name, "Moeez");
//					malir.account_number = 5881;
//					malir.account_balance = 2000;
//					malir.account_tax = 50;
//
//					printf("\n Customer Name: %s \n", malir.name);
//					printf("\n Account Number: %d \n", malir.account_number);
//					printf("\n Account Balance: %d \n", malir.account_balance);
//					printf("\n Tax on Account: %d \n", malir.account_tax);
//					printf("\n --------------------------- \n");
//				}
//				else
//				{
//					if (selected_branch == 5)
//					{
//						// DHA branch
//
//						printf("\n");
//						printf("\n------ Shah Faisal Branch ------\n");
//						strcpy(DHA.name, "Qadeer");
//						DHA.account_number = 4881;
//						DHA.account_balance = 1000000;
//						DHA.account_tax = 50000;
//
//						printf("\n Customer Name: %s \n", DHA.name);
//						printf("\n Account Number: %d \n", DHA.account_number);
//						printf("\n Account Balance: %d \n", DHA.account_balance);
//						printf("\n Tax on Account: %d \n", DHA.account_tax);
//						printf("\n --------------------------- \n");
//					}
//					else
//					{
//						if (selected_branch == 6)
//						{
//							// korangi branch
//							printf("\n");
//							printf("\n");
//							printf("\n------ All Branch ------\n");
//
//							printf("\n");
//							printf("\n------ Korangi Branch ------\n");
//							strcpy(korangi.name, "Noman");
//							korangi.account_number = 9881;
//							korangi.account_balance = 10000;
//							korangi.account_tax = 500;
//
//							printf("\n Customer Name: %s \n", korangi.name);
//							printf("\n Account Number: %d \n", korangi.account_number);
//							printf("\n Account Balance: %d \n", korangi.account_balance);
//							printf("\n Tax on Account: %d \n", korangi.account_tax);
//							printf("\n --------------------------- \n");
//							printf("\n");
//							printf("\n");
//
//							// landhi branch
//
//							printf("\n------ Landhi Branch ------\n");
//							strcpy(landhi.name, "Bilal");
//							landhi.account_number = 7881;
//							landhi.account_balance = 80000;
//							landhi.account_tax = 1000;
//
//							printf("\n Customer Name: %s \n", landhi.name);
//							printf("\n Account Number: %d \n", landhi.account_number);
//							printf("\n Account Balance: %d \n", landhi.account_balance);
//							printf("\n Tax on Account: %d \n", landhi.account_tax);
//							printf("\n --------------------------- \n");
//							printf("\n");
//							printf("\n");
//
//							// shahfaisal branch
//
//							printf("\n------ Shah Faisal Branch ------\n");
//							strcpy(shah_Faisal.name, "Rehman");
//							shah_Faisal.account_number = 6881;
//							shah_Faisal.account_balance = 50000;
//							shah_Faisal.account_tax = 1500;
//
//							printf("\n Customer Name: %s \n", shah_Faisal.name);
//							printf("\n Account Number: %d \n", shah_Faisal.account_number);
//							printf("\n Account Balance: %d \n", shah_Faisal.account_balance);
//							printf("\n Tax on Account: %d \n", shah_Faisal.account_tax);
//							printf("\n --------------------------- \n");
//							printf("\n");
//							printf("\n");
//
//							// malir branch
//
//							printf("\n------ Malir Branch ------\n");
//							strcpy(malir.name, "Moeez");
//							malir.account_number = 5881;
//							malir.account_balance = 2000;
//							malir.account_tax = 50;
//
//							printf("\n Customer Name: %s \n", malir.name);
//							printf("\n Account Number: %d \n", malir.account_number);
//							printf("\n Account Balance: %d \n", malir.account_balance);
//							printf("\n Tax on Account: %d \n", malir.account_tax);
//							printf("\n --------------------------- \n");
//							printf("\n");
//							printf("\n");
//
//							// DHA branch
//
//							printf("\n------ DHA Branch ------\n");
//							strcpy(DHA.name, "Qadeer");
//							DHA.account_number = 4881;
//							DHA.account_balance = 1000000;
//							DHA.account_tax = 50000;
//
//							printf("\n Customer Name: %s \n", DHA.name);
//							printf("\n Account Number: %d \n", DHA.account_number);
//							printf("\n Account Balance: %d \n", DHA.account_balance);
//							printf("\n Tax on Account: %d \n", DHA.account_tax);
//							printf("\n --------------------------- \n");
//						}
//						else
//						{
//							printf("null");
//						}
//					}
//				}
//			}
//		}
//	}
}
