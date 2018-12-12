#include "func.h"

void obtener_codigo(int codigo[]) {
	do {
		scanf("%d", &codigo[0]);
		if (codigo[0] < 0 || codigo[0] > 9) printf("INVALIDO NUM 1!\n");
		else break;
	} while (TRUE);
	do {

		scanf("%d", &codigo[1]);
		if (codigo[1] < 0 || codigo[1] > 9) printf("INVALIDO NUM 2!\n");
		else if (codigo[1] == codigo[0]) printf("REPETIDO NUM 2!\n");
		else break;
	} while (TRUE);
	do {
		scanf("%d", &codigo[2]);
		if (codigo[2] < 0 || codigo[2] > 9) printf("INVALIDO NUM 3!\n");
		else if (codigo[2] == codigo[0] || codigo[2] == codigo[1]) printf("REPETIDO NUM 3!\n");
		else break;
	} while (TRUE);
	do {
		scanf("%d", &codigo[3]);
		if (codigo[3] < 0 || codigo[3] > 9) printf("INVALIDO NUM 4!\n");
		else if (codigo[3] == codigo[0] || codigo[3] == codigo[1] || codigo[3] == codigo[2]) printf("REPETIDO NUM 4!\n");
		else break;
	} while (TRUE);
}
