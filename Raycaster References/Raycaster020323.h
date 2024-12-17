//
//  raycaster.h
//  Raycaster
//
//  Created by Jason Xie on 1/27/24.
//

#ifndef raycaster_h
#define raycaster_h

#include <SDL2/SDL.h>
#include <stdbool.h>

float CalculateRay(float RayDegree, float PlayerX, float PlayerY, float DirectionX, float DirectionY);
void HandleMovement(SDL_Event *event);
void NormalizeDirectionVector(float DirectionX, float DirectionY);


float PlayerX = 5;
float PlayerY = 5; // Player's current position
float DirectionX = 0;
float DirectionY = 1; // The direction the player is facing
float DirectionAbsoluteRadian;

bool isHorizontal = true;

int Map[11][11] =
{
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int const MapWidth = 11;
int const MapHeight = 11;


int const MAXCHECK = 20;


#endif /* raycaster_h */
