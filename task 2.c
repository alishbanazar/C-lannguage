//task 2 grading system
#include <stdio.h>
  int main(){
  int num;
  printf("Enter your numbers score : ");
  scanf("%d", &num);
  if(num>=90 && num<=100){
  	printf("Grade : A");
  }
  else if(num>=80 && num<=90){
  	printf("Grade : B");
  }
  else if(num>=70 && num<=80){
  	printf("Grade : C");
  }
  else if(num>=60 && num<=70){
  	printf("Grade : D");
  }
  else if(num>0 && num<=60){
  	printf("Grade : F");
  }
  else if(num>=0 && num>=100){
  	printf("Input valid!.\n please enter marks between 0 to 100");
  }
  else{
  	printf("Pleae insert the correct number");
  }
}
