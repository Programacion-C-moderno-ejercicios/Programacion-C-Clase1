#include "utils.h"
#include "string.h"

int cuenta_numero_letras(char cadena[], char letra)
{
	int res = 0;
	int i = 0;
	for(i = 0; cadena[i] != '\0'; i++){
		if(cadena[i] == letra) res++;
	}
	return res;
}

int compara_cadena(char *cadena1, char *cadena2)
{
	int res = 1;
	if(strcmp(cadena1, cadena2)) res = 0;
	return res;
}

int tipo_de_letra(char letra)
{
	int res = 0;
	switch(letra){
	case 'a':
		res = 1;
		break;
	case 'c':
		res = 2;
		break;
	case 'e':
		res = 3;
		break;
	default:
		break;
	}
	return res;
}

int primera_letra(char cadena[], char letra)
{
	int res = -1;
	int i = 0;
	for(i = 0; cadena[i] != '\0'; i++){
		if(cadena[i] == letra){
			res = i;
			break;
		}
	}
	return res;
}

int cambia_letras(char cadena[], char letraoriginal, char letracambiar)
{
	int res = -1;
	int i = 0;
	for(i = 0; cadena[i] != '\0'; i++){
		if(cadena[i] == letraoriginal){
			cadena[i] = letracambiar;
			res = i;
			break;
		}
	}
	return res;
}

int suma_numeros(int n, int m)
{
	return n + m;
}

int resta_numeros(int n, int m)
{
	return n - m;
}

int multiplica_numeros(int n, int m)
{
	return n * m;
}

