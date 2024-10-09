#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove newline character
    printf("%s\n", str);  // Added \n to print a new line after the string
    return 0;
}
