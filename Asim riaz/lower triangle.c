//lower triangle
#include <stdio.h>
int main(){
	int i,j;
	for(int i=10; i>=1; i--){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}
