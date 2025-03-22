#include <stdio.h>
void call_by_value(int x, int y) {
    x = x + 10;
    y = y + 10;
    printf("Inside call_by_value function:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}
void call_by_reference(int *x, int *y) {
    (*x) = (*x) + 10;
    (*y) = (*y) + 10;
    printf("Inside call_by_reference function:\n");
    printf("x = %d\n", *x);
    printf("y = %d\n", *y);
}
int main() {
    int a = 10;
    int b = 20;

    printf("Before calling functions:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    call_by_value(a, b);
    printf("After calling call_by_value function:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    call_by_reference(&a, &b);
    printf("After calling call_by_reference function:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
