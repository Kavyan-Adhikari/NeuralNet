
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int rows;
	int cols;
	double* data;
} Matrix;

Matrix create_matrix(int rows, int cols) {
	Matrix m;
	m.cols = cols;
	m.rows = rows;
	m.data = (double*) calloc(rows * cols, sizeof(double));
	if(m.data == NULL) {
		printf("ERROR: Cannot allocate memory");
	}

	return m;
}

void free_matrix(Matrix *m) {
	
	free(m->data);
	free(m);
}


// TODO implement copy constructor

void print_matrix(const Matrix *m) {
	
	for(int i = 0; i < m->rows; i++) {
		for(int j = 0; j < m->cols; j++) {
				printf("%6.2f", m->data[i * (m->rows) + j]);
		}
		printf("\n");
	}
	printf("\n");
}


void add_matrix(Matrix *a, Matrix *b) {
		
	for (int i = 0; i< a->rows; i++) {
		for (int j = 0; j < a->cols; j++) {
			a->data[i * a->rows + j] += b->data[i * (a->rows) + j];
		}
	}
}
	
// returns pointer to value at (i,j) in m  
double* get(Matrix m, int i, int j) {
	return &(m.data[i * m.rows + j ]);
}

// returns the dot product of a * b if applicable, empty matrix other wise
Matrix dot_prod(Matrix *a, Matrix *b) {

	if (a->cols != b->rows) {
		printf("ERROR: Cannot multiply matrices");
		return create_matrix(0,0);
	}
	Matrix c = create_matrix(a->rows, b->cols);
	
	for (int i =  0; i < b->cols; i++) {
		for (int j = 0; j < a->rows; j++){
								
		}
	}
	

	return c;
}

int main() {
	
	Matrix A = create_matrix(0,0);
	print_matrix(&A);

	return 0;

}
