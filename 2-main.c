#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int temp, counter;
    counter = 1;

    for (int i = 0; i < (num / 2); i++)
    {
	    temp = arr[i];
	    arr[i] = arr[num - counter];
	    arr[num - counter] = temp;
	    counter = counter + 1;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
