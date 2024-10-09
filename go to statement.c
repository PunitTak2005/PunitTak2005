#include <stdio.h>

int main() {

    int i = 0;

start:

    if (i < 5) {

        printf("%d ", i);

        i++;

        goto start; // Jump back to the 'start' label

    }

    printf("\nDone!");

    return 0;


}
