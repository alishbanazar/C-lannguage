//for loop
#include <stdio.h>
int main(){
	int n=1, inc=2;
	for(int counter=1; counter<=9; counter++){
		printf("%d", n);
		inc = counter > 4 ? -2 : 2;
		n+=inc;
	}
	return 0;
	
}
