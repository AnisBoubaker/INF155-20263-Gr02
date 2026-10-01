#include <stdio.h>

int plus_petite(int val1, int val2, int val3) {
    int minimum = val1;
    if (val2 <minimum) {
        minimum = val2;
    }
    if (val3 <minimum) {
        minimum = val3;
    }
    return minimum;
}


int main(void) {
    int min;

    min = plus_petite(10, 8, 32);
    printf("Le minimum est: %d\n", min);
    printf("Le minimum de 56, 98, 123: %d\n",  plus_petite(56, 98, 123) );

    return 0;
}
