#pragma once

#define GRAVITY 9.80665f;

typedef struct ball {
    float mass; // kg
    float radius; // m
    float height; // m
    float velocity; // m/s
    float elasticity; // 0-1
} Ball;

void Init(Ball* b);

void AdjustHeightVelocity(Ball* b, const float timestep);