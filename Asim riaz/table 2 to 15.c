//table 2 to 15
#include <stdio.h>
int main(){
	int n=1, table, counter;
	for(counter=1; counter<=12; counter++){
		for(table=n; table<n+4; table++){
			printf("%d x %d = %d \t", table, counter , table*counter);
			
		}
		puts("");
		if(table == n+5 && counter == 12){
			puts("");
			counter=0;
			n+=5;
		}
		if(table == 16 && counter ==0){
			break;
		}
	}
}
//#include <stdio.h>
//int main() {
//    int n = 1, table, counter;
//
//    // Loop to print tables in groups of 5 until table 15
//    while (n <= 15) {
//        // Loop to print each row (1 to 12) for the current group of tables
//        for (counter = 1; counter <= 12; counter++) {
//            // Loop to print the current set of 5 tables
//            for (table = n; table < n + 5 && table <= 15; table++) {
//                printf("%d x %d = %d\t", table, counter, table * counter);
//            }
//            printf("\n");  // New line after each row
//        }
//        printf("\n");  // Extra new line to separate groups of tables
//        n += 5;  // Move to the next set of 5 tables
//    }
//
//    return 0;
//}

