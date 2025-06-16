#include <stdio.h>

int isPrime(int num) {
    int j;
    if(num < 2) return 0;
    for(j = 2; j * j <= num; j++) {
        if(num % j == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for(i = 2; i <= n; i++) {
        if(isPrime(i))
            printf("%d ", i);
    }

    return 0;
}