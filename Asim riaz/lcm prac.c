//prac lcm
#include <stdio.h>
int main(){
	int n=30;
	int div=2;
	printf("Divisor of %d : ", n);
	while(n>1){
		if(n%div == 0){
			printf("%d", div);
			n / div;
		}
		else{
			div++;
		}
	}
}
//#include <stdio.h>
//int main() {
//    int n = 30;
//    int div = 2; // Starting from the smallest divisor
//    printf("Divisors of %d: ", n);
//
//    while (n > 1) { // Continue dividing until n is reduced to 1
//        if (n % div == 0) {
//            printf("%d ", div);
//            n /= div; // Divide n by div
//        } else {
//            div++; // Move to the next divisor
//        }
//    }
//    return 0;
//}

