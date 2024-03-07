#include <stdio.h>

int main() {
    int a;
    int *b;
    int **c;

    a = 10;
    b = &a;
    c = &b;

    printf("%d:%p", *b,(void*)b);
    printf("\n");
    printf("%p:%d", (void*)c, (**c));
    printf("\n");

    return 0;
}
