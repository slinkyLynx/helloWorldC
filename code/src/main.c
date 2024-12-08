#include "ball.h"

#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    Ball b;
    Init(&b);
    AdjustHeightVelocity(&b, 0.1f);
    return 0;
}