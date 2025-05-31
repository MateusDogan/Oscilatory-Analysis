#include "FFT.h"

Sample NUFFT(Sample data)
{
    return data;
}

Sample inv_NUFFT(Sample data)
{
    return data;
}


Matrix **CriaMatriz(int nlin, int ncol)
{
Matrix *m = (Matrix **)calloc(1, sizeof(Matrix *));
m->columns = ncol;
m->row = nlin;
m->data = (double **)calloc(nlin, sizeof(double *));
for (int l = 0; l < nlin; l++)
        m->data[l] = (double *)calloc(ncol, sizeof(double));
return m;
}

void DestroiMatriz(int ***m, int nlin)
{
if (m != NULL && (*m) != NULL)
{
        for (int l = 0; l < nlin; l++)
            free((*m)[l]);
        free(*m);
        *m = NULL;
}
}