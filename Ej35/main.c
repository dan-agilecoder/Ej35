#include "func.h"

int main() {
	int codigo[4];
	int respuesta[4];
	int i;
	int aciertos = 0, coinc = 0, turno = 0;
	obtener_codigo(codigo);

	for (i = 0; i<4; i++)
		printf("%d ", codigo[i]);
	printf("\n");
	
	return 0;
}
