#include "matrix.h"
#include <stdlib.h>
#include <math.h>

Matrix* matrix_create(int rows, int cols) {
    Matrix* mat = malloc(sizeof(Matrix));
    if (!mat) return NULL;
    
    mat->rows = rows;
    mat->cols = cols;
    return mat;
}
