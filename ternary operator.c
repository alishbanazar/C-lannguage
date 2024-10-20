#include <stdio.h>
int main(){
	int age;
	printf("Enyter your age : ");
	scanf("%d",&age);
	age>=18 ? printf("You can vote") : printf("You are not eligible");
	return 0;
}
