#include "Vector.h"
#include "Matrix.h"

Vector * make_vec(unsigned len) {
	Vector *newVector = new Vector;
	if (len <= MAX_VEC) {
		newVector->lenght = len;
		newVector->data = new int[len];
		for (int i = 0; i < len; i++) {
			newVector->data[i] = 0;
		}
		return newVector;
	}
	else return nullptr;
}

void value_set_vec(Vector * v1, unsigned x, int val) {
	if (x <= size_vec(v1) && v1 != nullptr) {
		v1->data[x] = val;
	}
}

void print_vec(Vector * v1) {
	for (int i = 0; i < size_vec(v1); i++) {
		cout << v1->data[i] << " ";
	}
	cout << endl;
}

unsigned size_vec(Vector * v1) {
	return v1 == nullptr ? 0 : v1->lenght;
}

void del_vec(Vector * v1) {
	if (v1 != nullptr) {
		delete[] v1->data;
		delete v1;
		v1 = nullptr;
	}
}

Vector * from_matrix_row(Matrix * m, unsigned rn) {
	Vector *temp = make_vec(rn);
	if (m != nullptr && rn <= m->rowLength) {
		int j = 0;
		for (int i = rn * m->rowLength; i < (rn*m->rowLength + m->collumnsLength); i++) {
			temp->data[j++] = m->data[i];
		}
	}
	return temp;
}