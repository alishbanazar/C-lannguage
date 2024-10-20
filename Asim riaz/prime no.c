//find prime number
#include <stdio.h>
//int main(){
//	int n, count=0, i=1;
//	printf("Enter number :");
//	scanf("%d", &n);
//	while(i<=n){
//		if(n%i == 0){
//			count++;
//		}
//		i++;
//	}
//	if(count == 2){
//		printf("prime number");
//	}
//	else{
//		printf("not a prime number");
//	}
//}
int main(){
	int n, count=0, i=1;
	printf("Enter number : ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(count==2){
			printf("prime number");
		}
		else{
			printf("Not a prime number");
		}
	}
}
