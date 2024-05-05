#include <iostream>
#include <random>
#include <list>

using namespace std;

// Función para generar un número aleatorio entre 1 y 10
int gen_num(){
    random_device rd;
    uniform_int_distribution<> dis(1, 10);
    int numero = dis(rd);
    return numero;
}

int main() {
    int num = gen_num(); // Genera un número aleatorio
    int intentos = 0; // Contador de intentos
    list<int> numeros; // Lista para almacenar los números ingresados por el usuario
    int adivinanza; // Variable para almacenar el número ingresado por el usuario
    cout << "Adivina el número entre 1 y 10: ";
    cin >> adivinanza; // Lee el número ingresado por el usuario
    numeros.push_back(adivinanza); // Agrega el número a la lista de números ingresados

    // Mientras el número ingresado sea diferente al número generado
    while(adivinanza != num){
        cout << "Numeros ya utilizados:";
        for (int n : numeros) {
            cout << " " << n; // Imprime los números ingresados por el usuario
        }
        cout << endl;
        cout << "Incorrecto, intenta de nuevo: ";
        cin >> adivinanza; // Lee el número ingresado por el usuario
        numeros.push_back(adivinanza); // Agrega el número a la lista de números ingresados
        intentos++; // Incrementa el contador de intentos
    }

    // Imprime el mensaje de éxito junto con el número generado y la cantidad de intentos
    cout << "Correcto! El numero era " << num << " y te tomo " << intentos << " intentos adivinarlo." << endl;
    system("pause"); // Pausa la ejecución del programa antes de finalizar
    return 0;
}