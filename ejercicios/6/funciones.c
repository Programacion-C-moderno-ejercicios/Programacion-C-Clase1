#include <stdio.h>
#include <string.h>

//Pre: Entra una letra
//Post: Devolver un 1 si la letra es una letra 'a'. Si no, devolver 0.
int es_una_A(char letra)
{
	int res = 0;
	if(letra == 'a') res = 1;
	return res;
}

void main(void)
{
	int i;
	char cadena[40] = "Hola dola pepsi cola\n";

	for (i = 0; i < strlen(cadena); i++) {
		if (es_una_A(cadena[i]))
			printf("En la posición %d tenemos una letra 'a'\n", i);
	}
}
