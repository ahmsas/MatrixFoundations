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
    if (!A || !B || !result) return 1;
    if (A->rows != B->rows || A->cols != B->cols || A->rows != result->rows || A->cols != result->cols) return 2;
    
    int total = A->rows * A->cols;
    for (int i = 0; i < total; i++) {
        result->data[i] = A->data[i] + B->data[i];
    }
    return 0;
}
