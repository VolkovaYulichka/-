#include <stdio.h>
int main(int argc, char *argv[]) {

  int t, i, num[9][9] ;
	for(t=0; t<9; t++){
		for(i=0;i<9;i++){
		num[t][i] = 0;
		num [i][t]=1;
		}
  
	}
  
	for(t=0; t<9; t++){
		for(i=0; i<9; i++)
		printf("%3d ", num[t][i]);
		printf("\n");
	}
}
