#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Ejercicio 1:
void mediana() {
    cout << "\n=== 1. MEDIANA DE UN ARRAY ===\n";
    int arr[] = {5, 2, 8, 1, 9, 3};
    int n = 6;

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Cálculo de la mediana
    double mediana;
    if (n % 2 == 0) {
        mediana = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        mediana = arr[n / 2];
    }

    cout << "Mediana: " << mediana << "\n";
}

// Ejercicio 2: 
void busquedaBinaria() {
    cout << "\n=== 2. BÚSQUEDA BINARIA ===\n";
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = 8;
    int buscado;
    
    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nIngresa el número a buscar: ";
    cin >> buscado;

    int izquierda = 0, derecha = n - 1;
    int posicion = -1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        if (arr[medio] == buscado) {
            posicion = medio;
            break;
        } else if (arr[medio] < buscado) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }

    if (posicion != -1) {
        cout << "Encontrado en posición: " << posicion << "\n";
    } else {
        cout << "No encontrado.\n";
    }
}

// Ejercicio 3: 
void transpuestaMatriz() {
    cout << "\n=== 3. TRANSPUESTA DE MATRIZ ===\n";
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int transpuesta[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "Matriz original:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(3) << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Matriz transpuesta:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(3) << transpuesta[i][j] << " ";
        }
        cout << "\n";
    }
}

// Ejercicio 4:
void sistemaInventario() {
    cout << "\n=== 4. SISTEMA DE INVENTARIO ===\n";
    const int MAX = 100;
    string productos[MAX];
    int cantidades[MAX];
    int n = 0;
    int opcion;

    do {
        cout << "\n=== SISTEMA DE INVENTARIO ===\n";
        cout << "1. Agregar producto\n";
        cout << "2. Mostrar inventario\n";
        cout << "3. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            if (n < MAX) {
                cout << "Nombre del producto: ";
                cin.ignore();
                getline(cin, productos[n]);
                cout << "Cantidad: ";
                cin >> cantidades[n];
                n++;
                cout << "Producto agregado.\n";
            } else {
                cout << "Inventario lleno.\n";
            }
        } else if (opcion == 2) {
            cout << "\nInventario:\n";
            cout << setw(20) << "Producto" << setw(10) << "Cantidad\n";
            cout << string(30, '-') << "\n";
            for (int i = 0; i < n; i++) {
                cout << setw(20) << productos[i] << setw(10) << cantidades[i] << "\n";
            }
        }
    } while (opcion != 3);
}

// Ejercicio 5: 
void ordenamientoSeleccion() {
    cout << "\n=== 5. ORDENAMIENTO POR SELECCIÓN ===\n";
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    cout << "Array original: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
}

// Ejercicio 6: Elementos duplicados
void elementosDuplicados() {
    cout << "\n=== 6. ELEMENTOS DUPLICADOS ===\n";
    int arr[] = {3, 5, 7, 5, 8, 3, 10};
    int n = 7;

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    cout << "Elementos duplicados: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout << "\n";
}

// Ejercicio 7: Tres en raya
void tresEnRaya() {
    cout << "\n=== 7. TRES EN RAYA ===\n";
    char tablero[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };
    int movimiento;
    int turno = 0; // 0 para X, 1 para O
    int jugadas = 0;

    auto mostrarTablero = [](char tablero[3][3]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << tablero[i][j] << " ";
            }
            cout << "\n";
        }
    };
    auto hayGanador = [](char tablero[3][3], char jugador) {
        // Filas y columnas
        for (int i = 0; i < 3; i++) {
            if (tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador) return true;
            if (tablero[0][i] == jugador && tablero[1][i] == jugador && tablero[2][i] == jugador) return true;
        }
        // Diagonales
        if (tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador) return true;
        if (tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador) return true;
        return false;
    };

    while (jugadas < 9) {
        mostrarTablero(tablero);
        char jugadorActual = (turno == 0) ? 'X' : 'O';
        cout << "Jugador " << jugadorActual << ", elige una casilla (1-9): ";
        cin >> movimiento;

        int fila = (movimiento - 1) / 3;
        int col = (movimiento - 1) % 3;

        if (movimiento < 1 || movimiento > 9 || tablero[fila][col] == 'X' || tablero[fila][col] == 'O') {
            cout << "Movimiento inválido. Intenta de nuevo.\n";
            continue;
        }

        tablero[fila][col] = jugadorActual;
        jugadas++;

        if (hayGanador(tablero, jugadorActual)) {
            mostrarTablero(tablero);
            cout << "¡Jugador " << jugadorActual << " gana!\n";
            return;
        }

        turno = 1 - turno;
    }

    cout << "¡Empate!\n";
}

int main() {
    int opcion;
    
    do {
        cout << "\n=== EJERCICIOS PARA PRACTICAR ===\n";
        cout << "1. Mediana de un array\n";
        cout << "2. Búsqueda binaria\n";
        cout << "3. Transpuesta de matriz\n";
        cout << "4. Sistema de inventario\n";
        cout << "5. Ordenamiento por selección\n";
        cout << "6. Elementos duplicados\n";
        cout << "7. Tres en raya\n";
        cout << "0. Salir\n";
        cout << "Elige un ejercicio (0-7): ";
        cin >> opcion;

        switch (opcion) {
            case 1: mediana(); break;
            case 2: busquedaBinaria(); break;
            case 3: transpuestaMatriz(); break;
            case 4: sistemaInventario(); break;
            case 5: ordenamientoSeleccion(); break;
            case 6: elementosDuplicados(); break;
            case 7: tresEnRaya(); break;
            case 0: cout << "¡Hasta luego!\n"; break;
            default: cout << "Opción no válida.\n";
        }
        
        if (opcion != 0) {
            cout << "\nPresiona Enter para continuar...";
            cin.ignore();
            cin.get();
        }
    } while (opcion != 0);

}
