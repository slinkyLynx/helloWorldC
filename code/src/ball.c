#include "ball.h"

#include <stdio.h>
#include <string.h>

void Init(Ball* b) {
    b->mass = 1.0f;
    b->radius = 0.2f;
    b->height = 0.5f;
    b->velocity = 0.0f;
    b->elasticity = 1.0f;
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