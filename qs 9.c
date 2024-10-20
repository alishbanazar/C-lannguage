//practice question 9
//#include <stdio.h>
//int main(){
//	int marks;
//	printf("Enter your marks : ");
//	scanf("%d", &marks);
//	if(marks>=30){
//		printf("Congratulayions \n You passed");
//	}
//	else{
//		printf("Keep work hard \n you Fail");
//	}
//	return 0;
//}
//Another
#include <stdio.h>
//int main(){
//	int marks;
//	printf("Enter your marks : ");
//	scanf("%d", &marks);
//	if(marks >=0 &&  marks <=30){
//		printf("Pass");
//	}else if(marks>30 && marks <=100){
//		printf("PASS");
//	}else{
//		printf("You enter wrong marks");
//	}
//	return 0;
//}


//Ternary
int main(){
	int marks;
	printf("Enter your marks : ");
	scanf("%d", &marks);
	marks<=30 ? printf("Fail") : printf("pass");
}
