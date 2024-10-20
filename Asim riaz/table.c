//table print
#include <stdio.h>
int main(){
	for(int counter=1; counter<=12; counter++){
		for(int table=1; table<=5; table++){
			printf("%d x %d = %d\t" ,table,counter, table*counter);
		}
		printf("\n");
	}
	return 0;
}
