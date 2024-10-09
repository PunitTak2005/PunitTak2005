#include <stdio.h>

// Recursive function to calculate the factorial of a number

unsigned long long factorial(int n) {

    if (n == 0 || n == 1) {

        return 1;

    } else {

        return n * factorial(n - 1);

    }

}

int main() {

    int num = 5;

    unsigned long long result = factorial(num);

    printf("Factorial of %d is %llu\n", num, result);

    return 0;

}
