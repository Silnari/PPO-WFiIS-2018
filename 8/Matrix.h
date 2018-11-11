#pragma once

using namespace std;

extern unsigned MAX_VEC;

struct Vector;

struct Matrix {
	int *data;
	unsigned rowLength;
	unsigned collumnsLength;
};

Matrix *make_matrix(Vector *v1, unsigned rl, unsigned cl);

void print_matrix(Matrix *m);

void del_matrix(Matrix *m);
