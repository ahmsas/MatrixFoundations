#ifndef MATRIX_H
#define MATRIX_H

typedef struct Matrix {
    int rows;
    int cols;
    double* data;
} Matrix;

/* Core matrix operations */
Matrix* matrix_create(int rows, int cols);

#endif /* MATRIX_H */
