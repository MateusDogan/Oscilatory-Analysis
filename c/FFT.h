#ifndef FFT
#define FFT

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

typedef enum _bool
{
    false,
    true
} bool;

typedef struct _vetor
{
    int size;
    double *data;
}Vetor;

typedef struct _matrix
{
    int row;
    int columns;
    double **data;
}Matrix;


typedef struct _sample
{
    int size;
    bool Time_Pertubed;
    Vetor Y_Coordinate;
    Vetor TimeStamps;
    char* source_filename;
    char* Units;
} Sample;


Sample *NUFFT(Sample data);
Sample *inv_NUFFT(Sample data);
void DestroySample(Sample *data);
Vetor *CriaVetor(int n);
void DestroiVetor(Vetor *V);
Matrix *CriaMatriz(int nlin, int ncol);
void DestroiMatriz(Matrix *M, int nlin);

#endif