//task 3
#include <stdio.h>
int main(){
	int x;
	int y;
	printf("Enter interger 1st value for x : ");
	scanf("%d" , &x);
	printf("Enter integer 2nd value for y :");
	scanf("%d", &y);
	if(x > 0){
		if(y>5){
			printf("X is positive and y is greater than  5 \n ");
		}
		else{
			printf("X is positive but y is not greater than 5 \n");
		}
	}
		// Check if x is 0 or negative
		else if(x == 0){
			printf("X is 0 \n");
		}
		else{
			printf("X is negative \n");
		}
		return 0;
	}
