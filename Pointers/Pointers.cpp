#include<stdio.h>

int main(){
	int x = 990;
	int *y = &x;
	
	printf("The actual value %d \n", x);
	
	printf("The memory reference %u", &x);
	
	printf("Value of y: %u", &y);
	
	return 0;
}
