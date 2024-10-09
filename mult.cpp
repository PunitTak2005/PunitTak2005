#include <stdio.h>

 

// Mult: Function definition

// a and b are the PARAMETERS

int Mult(int a, int b)

{

            // returning the multiplication

            return a * b;

}

 

// Driver code

int main()

{

            int num1 = 10, num2 = 20, res;

 

            // Mult() is called with

            // num1 & num2 as ARGUMENTS.

            res = Mult(num1, num2);

 

            // Displaying the result

            printf("The multiplication is %d", res);

            return 0;

}
