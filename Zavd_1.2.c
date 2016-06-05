#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int mas[9][9], i, j;
		for(i = 0; i < 9; i++) {
		for( j = 0; j < 9; j++){
			if(i <= j ) 
				mas[i][j] = 0;
				else
					mas[i][j] = 1;
		}
	}
	for(i = 0; i < 9; i++) {
			for(j = 0; j < 9; j++)
			printf(" %d", mas[i][j]);
			printf("\n");
	}
	system("pause");
	return 0;		
}
