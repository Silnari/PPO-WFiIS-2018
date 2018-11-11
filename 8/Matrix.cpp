#include "Matrix.h"
#include "Vector.h"


Matrix * make_matrix(Vector * v1, unsigned rl, unsigned cl) {
	Matrix *newMatrix = nullptr;
	if (v1 != nullptr) {
		unsigned ms = rl * cl;
		newMatrix->data = new int[ms];
		for (int i = 0; i < size_vec(v1); i++) {
			newMatrix->data[i] = v1->data[i];
		}
		newMatrix->collumnsLength = cl;
		newMatrix->rowLength = rl;
	}
	return newMatrix;
}

void print_matrix(Matrix * m) {
	if (m == nullptr) {
		cout << "empty" << endl;
	}
	else {
		unsigned temp = m->collumnsLength*m->rowLength;
		for (int i = 0; i < temp; i++) {
			cout << m->data[i] << " ";
			if (i != 0 && i % (m->rowLength) == 0) cout << endl;
		}
	}

}

void del_matrix(Matrix * m) {
	if (m != nullptr) {
		delete[]m->data;
		delete m;
		m = nullptr;
	}
}
