#include "ball.h"

#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");

    Ball b;
    const float startMass = 70.0f;
    const float startRadius = 1.1f;
    const float startHeight = 1.8f;
    const float startVel = 1.42f;
    const float startElas = 0.9f;
    Init(&b, startMass, startRadius, startHeight, startVel, startElas);
    AdjustHeightVelocity(&b, 0.1f);
    return 0;
}