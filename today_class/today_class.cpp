#include<stdio.h>

main(){
	
//----------------------------------------
	// pointer
	
//	int a =10;
//	int *p;
//	
//	p= &a;
//	
//	printf("\n Value in p : %d \n" , *p);
//	printf("\n Address in p : %x \n" , p);
//	
//	printf("\n Value in a : %d \n", a);
//	printf("\n Address in a : %x \n", &a);
//	printf("\n  \n");	
//-----------------------------------------


	// File Handling
	
	
	FILE *f1;
	int rollno;
	char stdname[50];
	char grade[10];
	int fee;
	char branch[50];
	
	
	f1 = fopen("record.txt","a");
	fprintf(f1,"\n");
	
	printf("Enter your Roll # : ");
	scanf("%d",&rollno);
	fprintf(f1,"Roll # : %d \n", rollno);
	
	
	printf("Enter your Name : ");
	scanf("%s",&stdname);
	fprintf(f1,"Student Name : %s \n",stdname);


	printf("Enter your Class : ");
	scanf("%s",&grade);
	fprintf(f1,"Class : %s \n",grade);
	
	
	printf("Enter your Fee: ");
	scanf("%d",&fee);
	fprintf(f1,"Fees : %d \n",fee);


	printf("Enter your Branch: ");
	scanf("%s",&branch);
	fprintf(f1,"Branch : %s \n",branch);	


















//	printf("Enter your :");
//	scanf("");
//	
//	fprintf(f1,"",);

	
	
	
	
}
