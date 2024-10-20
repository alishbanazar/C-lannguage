#include <stdio.h>
int main(){
	int age;
	printf("Enter your age : ");
	scanf("%d", &age);
	if(age > 18){
		printf("Adult \n You can vote \n");
	}
	else{
		printf("not adult");
	}
	printf("Thank you");
	return 0;
}
