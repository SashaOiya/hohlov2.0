#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPSILON 0.0001f

int check (int n_elements, float resistance[], float resistance_final, float *blabla )
{

    float sum = 0;

    for (int i = 0; i < n_elements; i++)
    {
      sum += resistance[i] - resistance_final;

    }
    *blabla = sum / n_elements;

    return (fabs (sum / n_elements) < EPSILON);
}

#undef EPSILON
