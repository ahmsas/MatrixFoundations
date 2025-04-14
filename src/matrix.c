#include "matrix.h"
#include <stdlib.h>
#include <math.h>

Matrix* matrix_create(int rows, int cols) {
    Matrix* mat = (Matrix*)malloc(sizeof(Matrix));
    if (!mat) return NULL;
    
    mat->rows = rows;
    mat->cols = cols;
    mat->data = (double*)malloc(rows * cols * sizeof(double));
    
    if (!mat->data) {
        free(mat);
        return NULL;
    }
    return mat;
}

void matrix_free(Matrix* mat) {
    if (mat) {
        free(mat->data);
        free(mat);
    }
}

int matrix_add(const Matrix* A, const Matrix* B, Matrix* result) {
}
