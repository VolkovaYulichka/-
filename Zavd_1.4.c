#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas[9][9], i, t;
	
	for(i = 0; i < 9; i++){
		if(i < 9/2)
			for(t = 0; t < 9; t++)
				mas[i][t] = 0;
				else
					for( t = 0; t < 9; t++)
						if(i < (9 - t) - 1)
						mas[i][t] = 0;
						else if(t < i + 1)
							mas[i][t] = 1;
							else 
								mas[i][t] = 0;
	}
	
	for(t = 0; t < 9; t++){
		for(i = 0; i < 9; i++)
		printf("%3d", mas[t][i]);
		printf("\n");
	}	
	
	
	system("pause");
	return 0;
}
