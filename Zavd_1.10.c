#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int main(int argc, char *argv[]) {
	int mas[SIZE][SIZE], i, j;
	for(i = 0; i < SIZE; i++){
		for ( j = 0; j < SIZE; j++){
			if(i >= SIZE - j)
			mas[i][j] = 1;
			else
			mas[i][j] = 0;
		}
	}

	
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++)
		printf("%3d", mas[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}
