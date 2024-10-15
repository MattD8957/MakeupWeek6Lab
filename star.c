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
	// Amount of Rows and amount of * in the last row
	int size = 0;

	// Get desired size from user
	printf("Please enter a position integer: ");
	scanf("%d", &size);

	// Print 
	for (int i = 1; i <= size; i++){ // Every loop is 1 row
		for(int j = 0; j < i; j++) { // Every loop prints 1 * 
			printf("*");
		}
		printf("\n"); // Starts next loop on a new line
	}	

	return 0;
}
 
