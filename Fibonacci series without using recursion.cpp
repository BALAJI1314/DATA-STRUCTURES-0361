#include <stdio.h>

int main() {
    int n, i;
    long long int fib1 = 0, fib2 = 1, nextFib;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %lld, %lld", fib1, fib2);

    for (i = 3; i <= n; ++i) {
        nextFib = fib1 + fib2;
        printf(", %lld", nextFib);
        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("\n");

    return 0;
}

