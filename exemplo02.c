#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* ptr;
	char ch;

	// Abertura de um arquivo de modo de leitura
	ptr = fopen("texto.txt", "r");

	if (NULL == ptr) {
		printf("arquivo nao pode ser aberto \n");
		return 1;
	}else{

		printf("Conteudo do Arquivo: \n");

		// Imprimindo o que esta escrito no arquivo,
		// character by character using loop.
		do {
			ch = fgetc(ptr);
			printf("%c", ch);

			// Checando se o caracter é EOF.
			// Se EOF pare a leitura.
		} while (ch != EOF);
	}
	// Fechando o Arquivo
	fclose(ptr);
	return 0;
}

