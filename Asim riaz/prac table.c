//prac
#include <stdio.h>
int main(){
	int i,j,start;
	for(start=1; start<=100; start +=10){
		for(i=1; i<=10; i++){
			for(j=start; j<start+10; j++){
				printf("%d x %d = %2d\t" , j , i , (j*i));
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

