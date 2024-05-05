#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Función para dibujar el ahorcado según el número de errores
void dibujarAhorcado(int errores) {
    cout << "  +=========+\n";
    cout << "  |         |\n";
    cout << "  |         |\n";

    if (errores >= 1) {
        cout << "  |   O     |\n"; // Dibuja la cabeza si hay al menos 1 error
    } else {
        cout << "  |         |\n";
    }

    if (errores >= 2) {
        cout << "  |   |     |\n"; // Dibuja el cuerpo si hay al menos 2 errores
        cout << "  |   |     |\n";
    } else {
        cout << "  |         |\n";
        cout << "  |         |\n";
    }

    if (errores >= 3) {
        cout << "  |  /|\\    |\n"; // Dibuja los brazos si hay al menos 3 errores
    } else {
        cout << "  |         |\n";
    }

    if (errores >= 4) {
        cout << "  |   |     |\n";
    } else { 
        cout << "  |         |\n";
    }

    if (errores >= 5) {
        cout << "  |  /      |\n";
        cout << "  |   |     |\n";
    } else { 
        cout << "  |         |\n";
        cout << "  |         |\n";
    }

    if (errores >= 6) {
        cout << "  |  /      |\n";
        cout << "  |         |\n";
        cout << "  |         |\n";
    } else {
        cout << "  |         |\n";
    }

    if (errores >= 7) {
        cout << "  |  /      |\n";
        cout << "  |         |\n";
        cout << "  |         |\n";
        cout << "  +=========+\n";
    } else {
        cout << "  +=========+\n";
    }
}

int main() {
        srand(time(0));
        vector<string> palabras = {"programacion", "ahorcado", "computadora", "teclado", "github"};
        string palabra = palabras[rand() % palabras.size()];
        string adivinanza(palabra.size(), '_');
        int vidas = 7;

        while(vidas > 0 && adivinanza != palabra) {
                system("cls");
                dibujarAhorcado(vidas);
                cout << "Vidas: " << vidas << "\nPalabra: " << adivinanza << "\nIngresa una letra: ";
                char letra; cin >> letra;

                if(palabra.find(letra) == string::npos) {
                        --vidas;
                } else {
                        for(size_t i = 0; i < palabra.size(); ++i) {
                                if(palabra[i] == letra) {
                                        adivinanza[i] = letra;
                                }
                        }
                }
        }

        if(vidas > 0) {
                system("cls");
                cout << "¡Felicidades, ganaste! La palabra era: " << palabra << '\n';
        } else {
                dibujarAhorcado(vidas-6);
                system("cls");
                cout << "¡Perdiste! La palabra era: " << palabra << '\n';
        }

        system("pause");
        return 0;
}