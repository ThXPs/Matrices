#include <iostream>
#include <cstdlib>
#include <ctime>

const int FILAS = 3;
const int COLUMNAS = 3;

int matrizA[FILAS][COLUMNAS];
int matrizB[FILAS][COLUMNAS];
int matrizSuma[FILAS][COLUMNAS];

void inicializarMatriz(int matriz[][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = rand() % 100 + 1; // Genera números entre 1 y 100
        }
    }
}

void sumarMatrices(int matrizA[][COLUMNAS], int matrizB[][COLUMNAS], int matrizSuma[][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matrizSuma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int encontrarMinimo(int matriz[][COLUMNAS]) {
    int minimo = matriz[0][0];
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
            }
        }
    }
    return minimo;
}

int main() {
    srand(time(0)); // Inicializa el generador de números aleatorios

    // Inicializar matrices A y B con valores aleatorios
    inicializarMatriz(matrizA);
    inicializarMatriz(matrizB);

    // Mostrar las matrices A y B
    std::cout << "Matriz A:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            std::cout << matrizA[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\nMatriz B:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            std::cout << matrizB[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Sumar matrices A y B
    sumarMatrices(matrizA, matrizB, matrizSuma);

    // Mostrar la suma de las matrices
    std::cout << "\nSuma de Matriz A y Matriz B:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            std::cout << matrizSuma[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Encontrar el elemento más pequeño en Matriz A
    int minimo = encontrarMinimo(matrizA);

    std::cout << "\nElemento más pequeño en Matriz A: " << minimo << std::endl;

    return 0;
}
