#include <stdio.h>
#include <assert.h>
#include "utils.h"

static int test1(void)
{
	char * cadena = "Hola buenas";
	char letra = 'a';
	int tmp = cuenta_numero_letras(cadena, letra);
	assert(tmp == 2);
	printf("Hay %d letras %c en : %s\n", tmp, letra, cadena);

	char * cadena2 = "Hola buenas";
	tmp = compara_cadena(cadena, cadena2);
	assert(tmp == 1);
	printf("%s es igual a %s\n", cadena, cadena2);

	tmp = tipo_de_letra(letra);
	assert(tmp == 1);
	printf("%c es igual a 'a'\n", letra);

	return 0;
}

static int test2(void)
{
	char * cadena = "Hola buenas";
	char letra = 'a';
	int tmp = primera_letra(cadena, letra);
	assert(tmp == 3);
	printf("En %s la letra %c esta en la posicion %d\n", cadena, letra, tmp);

	int n = 4;
	int m = 5;
	tmp = suma_numeros(n, m);
	assert(n+m == tmp);
	printf("%d + %d es igual a: %d\n", n, m, tmp);
	return 0;
}

static int test3(void)
{
	int n = 5;
	int m = 3;
	int tmp = resta_numeros(n, m);
	assert(n-m == tmp);
	printf("%d - %d es igual a: %d\n", n, m, tmp);

	tmp = multiplica_numeros(n, m);
	assert(n*m == tmp);
	printf("%d * %d es igual a %d\n", n, m, tmp);
	return 0;
}

void main(void)
{
	test1();
	test2();
	test3();
	printf("Prueba cambia_letras\n");
	char cadena[15] = "Hola buenas";
	char letraorig = 'a';
	char letracamb = 'i';
	printf("%s\n", cadena);
	cambia_letras(cadena, letraorig, letracamb);
	printf("%s\n", cadena);
}
