#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0;
        int b = 1;
        for (int i = 2; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main(){
    int n_iteraciones;
    cout << "Ingrese el numero de iteraciones: ";
    cin >> n_iteraciones;
    cout << "El resultado de la serie de Fibonacci es: " << fibonacci(n_iteraciones) << endl;
    cin.ignore();
    cin.get();
    return 0;
}
