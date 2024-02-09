#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	char my_string[1024], mychar;
	int length;
	int myarray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	
	scanf("%s", my_string);
	length = strlen(my_string);

	for (int i = 0; i < 10; i++)
	{
		for ( int j = 0; j < length; j++)
		{
			if (my_string[j] - '0' == i)
			       myarray[i] = myarray[i] + 1;
		}	       
	}

	for (int i = 0; i < 10; i++)
		printf("%d ", myarray[i]);
	printf("\n");

	return 0;
}
