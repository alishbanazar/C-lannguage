#include <stdio.h>
//stars print
int main(){
	int outer=1, inner;
	while(outer<=4){
		inner=1;
		printf("%d", outer);
		while(inner<=4){
			printf("*");
			inner++;
		}
		outer++;
		printf("\n");
    }
}   
