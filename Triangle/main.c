//
//  main.c
//  Triangle
//
//  Created by Edwin Cardenas on 12/27/24.
//

#include <stdio.h>

static float triangleDegreeLimit = 180.0;

float remainingAngle(float angleA, float angleB)
{
    return triangleDegreeLimit - (angleA + angleB);
}

int main(int argc, const char * argv[]) {
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    
    printf("The third angle is %.2f\n", angleC);
    
    return 0;
}
