#include <iostream>
#include <limits>

using namespace std;

// Función para sumar dos números
int suma(int a, int b){
    return a + b;
}

// Función para restar dos números
int resta(int a, int b){
    return a - b;
}

// Función para multiplicar dos números
int multiplicacion(int a, int b){
    return a * b;
}

// Función para dividir dos números
int division(int a, int b){
    return a / b;
}

int main() {
    // Imprime las opciones disponibles
    cout << "Seleccione una opcion:\n 1.- Suma \n 2.- Resta\n 3.- Multiplicacion\n 4.- Division" << std::endl;
    
    int opcion;
    // Lee la opción del usuario
    cin >> opcion;
    
    int a, b;
    cout << "Ingrese el primer numero: ";
    
    // Verifica que el usuario ingrese un número válido
    while(!(cin >> a)){
        cout << "Por favor, ingrese un numero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Ingrese el segundo numero: ";
    
    // Verifica que el usuario ingrese un número válido
    while(!(cin >> b)){
        cout << "Por favor, ingrese un numero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    };
    
    // Realiza la operación seleccionada por el usuario
    switch(opcion){
        case 1:
            cout << "La suma es: " << suma(a, b) << std::endl;
            break;
        case 2:
            cout << "La resta es: " << resta(a, b) << std::endl;
            break;
        case 3:
            cout << "La multiplicacion es: " << multiplicacion(a, b) << std::endl;
            break;
       case 4:
            try {
                // Verifica que no se esté dividiendo por cero
                if(a == 0 or b == 0) throw "Division por cero no es permitida";
                cout << "La division es: " << division(a, b) << std::endl;
            }
            catch(const char* msg) {
                cerr << msg << endl;
            }
            break;
        default:
            cout << "Opcion no valida" << std::endl;
    }
    
    // Pausa la ejecución del programa hasta que el usuario presione una tecla
    system("pause");
    
    return 0;
}