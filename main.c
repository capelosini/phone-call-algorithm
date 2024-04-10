#include <stdio.h>

int main(){
    int n;
    printf("Qunatity of numbers: ");
    scanf("%d", &n);
    int numbers[n];
    int total=0;
    // GETTING AND FIXING THE NUMBERS
    for(int i = 0; i < n; i++){
        printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);
        // total += numbers[i];
        if (numbers[i] == 0){
            int t=1;
            while (i-t >= 0 && numbers[i-t] == 0){
                t++;
            }
            // total -= numbers[i-t];
            numbers[i-t] = 0;
        }
    }

    // ONLY THE SUM OF THE CORRECT NUMBERS
    // int total=0;
    for(int i = 0; i < n; i++){
        total += numbers[i];
    }
    printf("\nTotal: %d\n", total);

    return 0;
}