#include <stdio.h>
int main() {
    int N, i;
    printf("Enter your number:");
    if (scanf("%d", &N) != 1) { 
        return 1;
    } 
    if (N > 0) {
        for (i = 0; i < N; i++) {
            printf("Hello Loop!\n"); 
        }
    } else {
        printf("N must be a positive integer.\n");
    }
    return 0;
}