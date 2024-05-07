#include <iostream>

using namespace std;
// menu principal
int menu() {
  int opcion;
  cout << "1. Convertir peso" << endl;
  cout << "2. Convertir longitud" << endl;
  cout << "3. Convertir temperatura" << endl;
  cout << "4. Salir" << endl;
  cout << "Ingrese una opcion: ";
  cin >> opcion;
  return opcion;
}
// menu de conversion de peso
int menu_peso(){
    int opcion;
    cout << "1. Kilogramos a gramos" << endl;
    cout << "2. Gramos a kilogramos" << endl;
    cout << "3. Kilogramos a libras" << endl;
    cout << "4. Kilogramos a onzas" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    return opcion;  
}
// menu de conversion de temperatura
int menu_temp(){
    int opcion;
    cout << "1. Celsius a Fahrenheit" << endl;
    cout << "2. Fahrenheit a Celsius" << endl;
    cout << "3. Celsius a Kelvin" << endl;
    cout << "4. Kelvin a Celsius" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    return opcion;  
}
// menu de conversion de longitud
int menu_long(){
    int opcion;
    cout << "1. Metros a centimetros" << endl;
    cout << "2. Centimetros a metros" << endl;
    cout << "3. Metros a kilometros" << endl;
    cout << "4. Metros a pies" << endl;
    cout << "5. Metros a pulgadas" << endl;
    cout << "6. Metros a yardas" << endl;
    cout << "7. Metros a millas" << endl;
    cout << "8. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    return opcion;  
}

void freeze(){
    cout << "Presione una tecla para continuar...";
    cin.ignore();
    cin.get();
    system("cls");
}
// conversiones
double kg_to_gr(double kg){
    return kg * 1000;
}

double gr_to_kg(double gr){
    return gr / 1000;
}

double kg_to_lb(double kg){
    return kg * 2.20462;
}

double kg_to_oz(double kg){
    return kg * 35.274;
}

double c_to_f(double c){
    return (c * 9/5) + 32;
}

double f_to_c(double f){
    return (f - 32) * 5/9;
}

double c_to_k(double c){
    return c + 273.15;
}

double k_to_c(double k){
    return k - 273.15;
}

double m_to_cm(double m){
    return m * 100;
}

double cm_to_m(double cm){
    return cm / 100;
}

double m_to_km(double m){
    return m / 1000;
}

double m_to_ft(double m){
    return m * 3.28084;
}

double m_to_in(double m){
    return m * 39.3701;
}

double m_to_yd(double m){
    return m * 1.09361;
}

double m_to_mi(double m){
    return m * 0.000621371;
}

// funciones de conversion
void conversor_peso(){
    int opcion;
    double kg, gr, lb, oz;
    opcion = menu_peso();
    switch(opcion){
        case 1:
            cout << "Ingrese los kilogramos: ";
            cin >> kg;
            gr = kg_to_gr(kg);
            cout << "Los gramos son: " << gr << endl;
            freeze();
            break;
        case 2:
            cout << "Ingrese los gramos: ";
            cin >> gr;
            kg = gr_to_kg(gr);
            cout << "Los kilogramos son: " << kg << endl;
            freeze();
            break;
        case 3:
            cout << "Ingrese los kilogramos: ";
            cin >> kg;
            lb = kg_to_lb(kg);
            cout << "Las libras son: " << lb << endl;
            
            break;
        case 4:
            cout << "Ingrese los kilogramos: ";
            cin >> kg;
            oz = kg_to_oz(kg);
            cout << "Las onzas son: " << oz << endl;
            freeze();
            break;
        case 5:
            break;
        default:
            cout << "Opcion invalida" << endl;
            freeze();
            break;
    }
}
void conversor_temp(){
    int opcion;
    double c, f, k;
    opcion = menu_temp();
    switch(opcion){
        case 1:
            cout << "Ingrese los grados Celsius: ";
            cin >> c;
            f = c_to_f(c);
            cout << "Los grados Fahrenheit son: " << f << endl;
            freeze();
            break;
        case 2:
            cout << "Ingrese los grados Fahrenheit: ";
            cin >> f;
            c = f_to_c(f);
            cout << "Los grados Celsius son: " << c << endl;
            freeze();
            break;
        case 3:
            cout << "Ingrese los grados Celsius: ";
            cin >> c;
            k = c_to_k(c);
            cout << "Los grados Kelvin son: " << k << endl;
            freeze();
            break;
        case 4:
            cout << "Ingrese los grados Kelvin: ";
            cin >> k;
            c = k_to_c(k);
            cout << "Los grados Celsius son: " << c << endl;
            freeze();
            break;
        case 5:
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
};

void conversor_long(){
    double m, cm, km, ft, in, yd, mi;
    int opcion;
    opcion = menu_long();
    switch (opcion){
        case 1:
            cout << "Ingrese los metros: ";
            cin >> m;
            cm = m_to_cm(m);
            cout << "Los centimetros son: " << cm << endl;
            freeze();
            break;
        case 2:
            cout << "Ingrese los centimetros: ";
            cin >> cm;
            m = cm_to_m(cm);
            cout << "Los metros son: " << m << endl;
            freeze();
            break;
        case 3:
            cout << "Ingrese los metros: ";
            cin >> m;
            km = m_to_km(m);
            cout << "Los kilometros son: " << km << endl;
            freeze();
            break;
        case 4:
            cout << "Ingrese los metros: ";
            cin >> m;
            ft = m_to_ft(m);
            cout << "Los pies son: " << ft << endl;
            freeze();
            break;
        case 5:
            cout << "Ingrese los metros: ";
            cin >> m;
            in = m_to_in(m);
            cout << "Las pulgadas son: " << in << endl;
            freeze();
            break;
        case 6:
            cout << "Ingrese los metros: ";
            cin >> m;
            yd = m_to_yd(m);
            cout << "Las yardas son: " << yd << endl;
            freeze();
            break;
        case 7:
            cout << "Ingrese los metros: ";
            cin >> m;
            mi = m_to_mi(m);
            cout << "Las millas son: " << mi << endl;
            freeze();
            break;
        case 8:
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
}

// función principal
int main(){
    int opcion;
    do{
        opcion = menu();
        switch(opcion){
            case 1:
                conversor_peso();
                break;
            case 2:
                conversor_long();
                break;
            case 3:
                conversor_temp();
                break;
            case 4:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    } while(opcion != 4);
    return 0;
}