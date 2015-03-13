/* Realizar el ejercicio que hemos realizado con while pero usando
 * el bucle for
 */


/* Bibliotecas a incluir */
#include <stdio.h>

void main()
{
	/* Declaración de variables */
	int len;
	char cadena[7] = "cadena";
	/* Código usando condicional while */
	for(len = 0; cadena[len] != '\0'; len++){
		printf("Iteracion %d\n", len);
	}
	printf("La cadena mide %d\n", len);
}
