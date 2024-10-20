//fiber
#include <stdio.h>
int main(){
	//0 1 1 2 3 5 8 13
	int prev=0, curr=1, next;
	for(int n=1; n<=10; n++){
		printf("%d ", prev);
		
		next= prev+curr;
		prev = curr;
		curr=next;
	}
	return 0;
}
