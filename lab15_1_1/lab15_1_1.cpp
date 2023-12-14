#include <stdio.h>
int main() {
    double f, s;
    printf("Input the first number\n");
    scanf_s("%lf", &f);
    printf("Input the second number\n");
    scanf_s("%lf", &s);
    if (f > s) {
        printf("%f", f);
    }
    else {
        printf("%f, %f", f, s);
    }

    return 0;
}
