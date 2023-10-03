#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i, j;
	scanf("%d", &n);
	
	int mat[n][n];
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &mat[i][j]);
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	int somaDP = 0, somaDS = 0;
	
	//soma diagonal principal
	for (i = 0; i < n; i++) {
		somaDP += mat[i][i];
	}
	
	//soma diagonal secundária
	for (i = 0; i < n; i++) {
		somaDS += mat[i][n-i-1];
	}
	
	//soma linhas
	printf("\nSoma das linhas: ");
	int vetL[n];
	for (i = 0; i < n; i++) {
		vetL[i] = 0;
		for (j = 0; j < n; j++) {
			vetL[i] += mat[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		printf("%i ", vetL[i]);
	}

	//soma colunas
	printf("\nSoma das colunas: ");
	int vetC[n];
	for (j = 0; j < n; j++) {
		vetC[j] = 0;
		for (i = 0; i < n; i++) {
			vetC[j] += mat[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		printf("%i ", vetC[i]);
	}
	
	printf("\nSoma diagonal principal %i e secundária %i\n", somaDP, somaDS);

	int testaL = 1, testaC = 1;
	for (i = 1; i <  n; i++) {
		if (vetL[i] != vetL[i-1]) {
			testaL = 0;
			break;
		} else if (vetC[i] != vetC[i-1]) {
			testaC = 0;
			break;
		}
	}
	
	if (testaL && testaC && somaDP == somaDS && somaDP == vetL[0]) {
		printf("Quadrado magico");
	} else {
		printf("Quadrado nao magico");
	}

	return 0;
}