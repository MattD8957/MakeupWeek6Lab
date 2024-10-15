/*
 * CS1111 Lab6 Make up
 *
 * @author Matthew Dowling
 * @email mdowling@mtu.edu
 * @date 10/15/2024
 *
 */


#include <stdio.h>

int main()
{

	int size = 0;

	printf("Please enter a position integer: ");
	scanf("%d", &size);

	for (int i = 1; i <= size; i++){
		for(int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}	

	return 0;
}
 
