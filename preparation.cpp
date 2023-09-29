#include <math.h>
#include <stdio.h>

#define EPSILON 0.00001f

int data_select(int M, float resistance[]);

int data_select(int M, float *resistance)
{
    float sum_resistance = 0;
    int K = 0;

    for (size_t i = 0; i < M; i++)   //Сумма сопротивлений
        {
            sum_resistance += resistance[i];
        }

    float average_resistance = sum_resistance / M;   // Среднее

    for (size_t i = 0; i < M; i++)    // Выбрасывает ненужные и записывает их в новый массив
        {
        if (fabs(resistance[i] - average_resistance) < 0.03 + EPSILON)
            {
                K++;                  //счетчик
                resistance[i] = resistance[K];
            }
        }

    return K;
}
