#include <stdio.h>



int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 }; 
	int arr2[] = { 6, 7, 8, 9, 10 }; 
	int arr3[5];

	for (int i = 0; i < 5; ++i) printf("arr[%d] : %d\n", i, arr[i]);
	for (int i = 0; i < 5; ++i) printf("arr2[%d] : %d\n", i, arr2[i]);
	for (int i = 0; i < 5; ++i) printf("arr3[%d] : %d\n", i, arr3[i]);

	*(arr + 2) = 100; // == arr[2]
	printf("arr[2] : %d\n", arr[2]);

	return 0;
}
