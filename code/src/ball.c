#include "ball.h"

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
    char string[500];
    memset(string, 0, sizeof string);
    printf("Old height:\t");
    sprintf(string, "%f", b->height);
    printf(" m\nOld velocity:\t");
    sprintf(string, "%f", b->velocity);

    const float dVel = timestep * GRAVITY;
    const float oldVel = b->velocity;
    b->velocity += dVel;
    const float dHeight = timestep * (oldVel + b->velocity) / 2.0f;
    b->height += dHeight;

    printf(" m/s\nNew height:\t");
    sprintf(string, "%f", b->height);
    printf(" m\nNew velocity:\t");
    sprintf(string, "%f", b->velocity);
    printf(" m/s\n");
}