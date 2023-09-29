#include <stdio.h>

#include "finalRes.h"
#include "check.h"
#include "printf_lab.h"
#include "preparation.h"
#include "read.h"

int main()
{
    int data_size = 20;

    float data_v[data_size];
    float data_i[data_size];
    float data_r[data_size];

    FileRead ( data_v, data_i );

    ress (data_v, data_i, data_r, data_size);

    data_size = data_select( data_size, data_r);

    float average = finRes( data_r, data_size );

    float average_devation = 0;

    bool flag = check (data_size, data_r, average, &average_devation );

    float sq_devation = deviation( data_r, data_size );

    Printf ( average, average_devation, sq_devation );

    return 0;
}
