#include <stdio.h>

void bizarre(int a) {
    int b;
    a = a*a;
    b=a;
}


int main(void) {
    int a;
    a = 10;
    bizarre(a);
    printf("La variable a contient: %d\n", a);
    return 0;
}
