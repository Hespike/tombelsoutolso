#include <stdio.h>
#define N 6

int main(){
	int szamok[N]; //elemek száma N

	for(int i = 0; i< N; ++i){
		scanf("%d", &szamok[i]);
	}

	printf("A tomb elemei: ");
	for(int i = 0; i< N; ++i){
		printf("%d ", szamok[i]);
	}
	printf("\n");

	printf("A tomb elso: %d, utolso eleme %d", szamok[0], szamok[N-1]);

	return 0;
}