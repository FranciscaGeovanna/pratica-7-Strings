#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char frase[500];
	
	printf ("Programa para escrever frase ao contrário\n\n");
	
	printf("Digite sua frase: ");
	gets(frase);
	
	printf("Frase lida ao contrário: \n");
	for (int idx = strlen(frase); idx >= 0; idx--){
		printf("%c", frase[idx]);
	}
	
	return 0;
}