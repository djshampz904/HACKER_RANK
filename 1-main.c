#include "lists.h"

int main()
{
	int i;
	int arr_size;
	int *arr;
	int elements;
	int sum;

	i = 0;
	arr_size = 0;

	scanf("%d", &arr_size);

	arr = (int*)malloc(sizeof(int) * arr_size);
	if (arr == NULL)
	{
		printf("Memory allocation failed");
		exit(1);
	}

	while (i <= arr_size - 1)
	{
		scanf("%d", &elements);
		arr[i] = elements;
		i = i + 1;
	}
	sum = 0;

	for (int i = 0; i < arr_size; i++)
		sum = sum + arr[i];



	printf("%d", sum);
	printf("\n");

	return(0);
}
