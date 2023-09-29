#include <stdio.h>

void FileRead ( float *data_v, float *data_i )
{
    FILE *V = fopen ( "V.txt", "r" );
    FILE *I = fopen ( "I.txt", "r" );

    const int data_size = 20;

    for ( int i = 0; i < data_size + 1; ++i ) {
        fscanf ( V, "%f", &data_v[i] );
    }

    for ( int i = 0; i < data_size + 1; ++i ) {
        fscanf ( I, "%f", &data_i[i] );
    }

}
