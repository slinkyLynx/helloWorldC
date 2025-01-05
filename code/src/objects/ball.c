#include "ball.h"

#include <physConstants.h>

#include <stdio.h>
#include <string.h>

void Init(Ball* b, const float startMass, const float startRadius, const float startHeight, const float startVel, const float startElas) {
    b->mass = startMass;
    b->radius = startRadius;
    b->height = startHeight;
    b->velocity = startVel;
    b->elasticity = startElas;
}

void AdjustHeightVelocity(Ball* b, const float timestep) {
#ifndef NDEBUG
    // TODO: Use sprintf, then print the buffer to the console.
    printf("Old height:\t");
    printf("%+f", b->height);
    printf(" m\nOld velocity:\t");
    printf("%+f", b->velocity);
#endif

    const float dVel = timestep * GRAV_EARTH;
    const float oldVel = b->velocity;
    b->velocity += dVel;
    const float dHeight = timestep * (oldVel + b->velocity) / 2.0f;
    b->height += dHeight;

#ifndef NDEBUG
    printf(" m/s\nNew height:\t");
    printf("%+f", b->height);
    printf(" m\nNew velocity:\t");
    printf("%+f", b->velocity);
    printf(" m/s\n");
#endif
}

void ReflectAfterImpact(Ball* b) {
#ifndef NDEBUG
    printf("Old velocity:\t");
    printf("%+f", b->velocity);
#endif

    b->velocity *= -b->elasticity;

#ifndef NDEBUG
    printf(" m/s\nNew velocity:\t");
    printf("%+f", b->velocity);
    printf(" m/s\n");
#endif
}
