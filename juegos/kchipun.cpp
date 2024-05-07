#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// generar un movimiento
string generarMovimiento() {
  srand(time(0));
  int movimiento = rand() % 3;

  switch (movimiento) {
    case 0:
      return "piedra";
    case 1:
      return "papel";
    case 2:
      return "tijeras";
  }

  return "";
}

// determinar el ganador
string determinarGanador(const string& movimientoJugador, const string& movimientoComputadora) {
  if (movimientoJugador == movimientoComputadora) {
    return "Empate";
  } else if ((movimientoJugador == "piedra" && movimientoComputadora == "tijeras") ||
             (movimientoJugador == "papel" && movimientoComputadora == "piedra") ||
             (movimientoJugador == "tijeras" && movimientoComputadora == "papel")) {
    return "Ganaste";
  } else {
    return "Perdiste";
  }
}

// función principal
int main() {
  // variables para almacenar el puntaje
  vector<string> movimientos = {"piedra", "papel", "tijeras"};
  int victoriasJugador = 0;
  int victoriasComputadora = 0;

  // mensaje de bienvenida
  cout << "Bienvenido al juego de piedra, papel o tijeras\n";

  // nombre del jugador
  string nombreJugador;
  cout << "Ingresa tu nombre: ";
  cin >> nombreJugador;

  // número de rondas
  int numeroRondas;
  cout << "Ingresa el numero de rondas: ";
  cin >> numeroRondas;

  // bucle principal del juego
  for (int ronda = 1; ronda <= numeroRondas; ++ronda) {
    try {
      // muestra el puntaje actual
      cout << "Ronda " << ronda << ": Jugador: " << victoriasJugador << " Computadora: "
           << victoriasComputadora << "\n";

      // lee el movimiento del jugador
      string movimientoJugador;
      bool movimientoValido = false;

      // bucle para asegurarse de que el jugador ingrese un movimiento válido
      do {
        cout << nombreJugador << ", elige tu movimiento: piedra, papel o tijeras\n";
        cin >> movimientoJugador;

        movimientoValido = find(movimientos.begin(), movimientos.end(), movimientoJugador) != movimientos.end();

        if (!movimientoValido) {
            cout << "Movimiento invalido. Por favor, intenta de nuevo.\n";
        }
        } while (!movimientoValido);

      // genera el movimiento de la computadora
      string movimientoComputadora = generarMovimiento();
      cout << "La computadora eligio: " << movimientoComputadora << endl;

      // determina el resultado del juego
      string resultado = determinarGanador(movimientoJugador, movimientoComputadora);
      cout << resultado << "\n";

      // actualiza el puntaje
      if (resultado == "Ganaste") {
        victoriasJugador++;
      } else if (resultado == "Perdiste") {
        victoriasComputadora++;
      }

    } catch (const runtime_error& error) {
      cout << error.what() << "\n";
    }
  }

  // muestra el resultado final del juego
  system("cls");
  if (victoriasJugador > victoriasComputadora) {
    cout << nombreJugador << ", ganaste el juego!\n";
  } else if (victoriasJugador < victoriasComputadora) {
    cout << "La computadora te ha ganado.\n";
  } else {
    cout << "El juego termino en empate.\n";
  }

  cout << "Puntaje final: Jugador: " << victoriasJugador << " Computadora: " << victoriasComputadora << "\n";
  
  system("pause");

  return 0;
}
