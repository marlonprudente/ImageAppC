// ImageApp.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>

int main()
{
	int matriz[5][5] = {0,0,1,0,0,
						0,1,0,1,0,
						1,0,0,0,1,
						0,1,0,1,0,
						0,0,1,0,0};

	int transf[2][2] = {2,0,
						0, 2};

	int matriz2[10][10] = {0};
	//int matriz3[3][3] = {0};
	int k, l = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			k = transf[0][0] * i + transf[0][1] * j;
			l = transf[1][0] * i + transf[1][1] * j;
			matriz2[k][l] = matriz[i][j];
		}		
	}

	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		k = 0.5 * i + 0 * j;
	//		l = 0 * i + 0.5 * j;

	//		matriz3[k][l] = matriz[i][j];
	//	}
	//}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("=========================\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", matriz2[i][j]);
		}
		printf("\n");
	}
	//printf("=========================\n");
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		printf("%d ", matriz3[i][j]);
	//	}
	//	printf("\n");
	//}
	
	
	Sleep(10000);
    return 0;
}

