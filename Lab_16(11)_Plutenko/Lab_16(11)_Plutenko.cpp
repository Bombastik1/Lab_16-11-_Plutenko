#include <stdio.h>
#include <locale>
#include <stdlib.h>
#include <time.h>

void main() {
	setlocale(LC_ALL, "");
	int i, j, m, n;
	float** a;

	printf("Введiть розмiр матрицi (m i n): ");
	scanf_s("%d", &m);
	n = m;

	a = (float**)malloc(m * sizeof(float*));
	for (i = 0; i < m; i++) {
		a[i] = (float*)malloc(n * sizeof(float));
	}

	srand(time(NULL));

	printf("Початкова матриця:\n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			a[i][j] = rand() % 201 - 100;
			printf("%.0f ", a[i][j]);
		}
		printf("\n");
	}

	printf("\nМодифiкована матриця:\n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if ((int)a[i][j] % 3 == 0) {
				a[i][j] = 3;
			}
			printf("%.0f ", a[i][j]);
		}
		printf("\n");
	}
}