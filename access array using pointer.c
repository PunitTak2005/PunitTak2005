#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int *ptr = arr;  // Assign the address of the array to the pointer

    // Accessing elements using pointer arithmetic

    for (int i = 0; i < 5; i++) {

        printf("Element %d: %d\n", i, *(ptr + i));

    }

    return 0;

}
