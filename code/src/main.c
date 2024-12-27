#include "ball.h"

#include <math.h>
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
    int reflections = 0;

    for (int i = 0; i < 1E6; ++i) {
#ifndef NDEBUG
        putchar('\n');
#endif
        const float timestep = 1E-5F;
        AdjustHeightVelocity(&b, timestep);
        if (b.height < startRadius) {
            ReflectAfterImpact(&b);
            ++reflections;

            if (fabsf(b.velocity) < 1E-3F) {
                printf("Time elapsed:\t");
                printf("%+f", timestep * (float)i);
                printf(" s (");
                printf("%d", i);
                printf(" cycles)\n");

                printf("Reflections:\t");
                printf("%d", reflections);
                putchar('\n');
                break;
            }
        }
    }

    printf("New height:\t");
    printf("%+f", b.height);
    printf(" m\nNew velocity:\t");
    printf("%+f", b.velocity);
    printf(" m/s\n");

    return 0;
}
