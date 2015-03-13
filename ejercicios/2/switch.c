/* Creando una variable local de nombre "valor". Comprobar si dicha variable
 * es 0, si es así imprimir un mensaje diciendo que se ha recibido un 0.
 * Si es un uno, mensaje confirmando que se ha recibido un uno. En los demas
 * casos imprimir un mensaje diciendo que no es un valor esperado.
 */

/* Bibliotecas a incluir */
#include <stdio.h>

void main()
{
	/* Declaración de variables */
	int valor = 0;
	/* Código usando condicional switch */
	switch (valor) {
	case 0:
		printf("es igual a 0\n");
		break;
	case 1:
		printf("es igual a 1\n");
		break;
	default:
		printf("Valor no esperado\n");
		break;
	}
}
