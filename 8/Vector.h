#pragma once
#include <iostream>
#include "Matrix.h"

extern unsigned MAX_VEC;

using namespace std;

struct Matrix;

struct Vector {
	int *data;
	unsigned lenght;
};

Vector *make_vec(unsigned len);

void value_set_vec(Vector *v1, unsigned x, int val);

void print_vec(Vector *v1);

unsigned size_vec(Vector *v1);

void del_vec(Vector *v1);

Vector *from_matrix_row(Matrix *m, unsigned rn);
