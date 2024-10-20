
#include <stdio.h>
int main(){
    int numbers;
    printf("Enter numbers : ");
    scanf("%d", &numbers);
    
    if(numbers >= 0){
        printf("Positive number\n");
        if(numbers % 2 == 0){
            printf("Even Number\n");
        }else{
            printf("Odd Number\n");
        }
    }
    else{
        printf("Negative number\n");
    }
}

