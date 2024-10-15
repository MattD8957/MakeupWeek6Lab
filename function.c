/*
 * CS1111 Week6 Lab
 * @author Casey Hartman
 * @date 10/15/2024
 * @email efhartma@mtu.edu
 *
 */

#include <stdio.h>
void mystar(int);
int main() {

//variables
	int numStar = 0;

//ask user/scan input
	printf("Please enter a positive integer: ");
	scanf("%d", &numStar);
	
//run function
	for (int i = 1; i <= numStar; i++){
		mystar(i);    //print mystar with numStar as input
		printf("\n");
	}

}


// end if int main

//function
	void mystar(int i){
		for (int j = 0; j < i; j++) {
			printf("*");
	}
	}
