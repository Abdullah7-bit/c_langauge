#include <stdio.h>

int main()
{
	int arr[] = {10, 20, 65, 45, 89, 96}; // 6 values

	for (int i = 0; i < 6; i++)
	{
		printf("Index No.: %d - Values: %d \n", i, arr[i]);
	}
	printf("\n Sum of all array values: %d  \n", arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5]);

	return 0;
}
