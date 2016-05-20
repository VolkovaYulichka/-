#include <stdio.h>
void main ()
{
  int t, i, num[4][4] ;
	for(t=0; t<4; t++){
		for(i=0;i<4;i++){
		num[t][i] = 1;
		num [i][t]=(t*i)*0;
		}
  
	}
  
	for(t=0; t<4; t++){
		for(i=0; i<4; i++)
		printf("%3d ", num[t][i]);
		printf("\n");
	}
}
