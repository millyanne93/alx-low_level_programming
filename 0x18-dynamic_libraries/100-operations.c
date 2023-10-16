#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b == 0) {
        printf("Division by zero!\n");
        return 0;
    }
    return a / b;    
}
int mod(int a, int b) {
    if (b == 0) {
        printf("Modulus by zero!\n");
        return 0;
    }
    return a % b;
}
