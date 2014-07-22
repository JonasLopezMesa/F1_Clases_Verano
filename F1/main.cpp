#include <iostream>
using namespace std;

int main()
{
    string nombre[22];
    int ngpc[22];
    float puntos[22];
    int edad[22];
    int podios[22];
    string escuderia[22];
    
    // Nombres de los pilotos
    nombre[0] = "Nico Rosberg        ";
    nombre[1] = "Lewis Hamilton      ";
    nombre[2] = "Daniel Ricciardo    ";
    nombre[3] = "Fernando Alonso     ";
    nombre[4] = "Sebastian vettel    ";
    nombre[5] = "Nicco Hulkenberg    ";
    nombre[6] = "Valtteri bottas     ";
    nombre[7] = "Jenson button       ";
    nombre[8] = "Kevin Magnussen     ";
    nombre[9] = "Felipe Massa        ";
    nombre[10] = "Sergio Perez       ";
    nombre[11] = "Kimi Raikkonen     ";
    nombre[12] = "Romain Grosjean    ";
    nombre[13] = "Jean-Eric vergne   ";
    nombre[14] = "Danil Kvyat        ";
    nombre[15] = "Jules Bianchi      ";
    nombre[16] = "Adrian Sutil       ";
    nombre[17] = "Marcus Ericsson    ";
    nombre[18] = "Pastor Maldonado   ";
    nombre[19] = "Esteban Gutierrez  ";
    nombre[20] = "Max Chilton        ";
    nombre[21] = "Kamui Kobayashi    ";
    //Escudería a la que pertenecen
    escuderia[0] = "MERCEDES         ";
    escuderia[1] = "MERCEDES         ";
    escuderia[2] = "RED BULL RACING  ";
    escuderia[3] = "FERRARI          ";
    escuderia[4] = "RED BULL RACING  ";
    escuderia[5] = "FORCE INDIA      ";
    escuderia[6] = "WILLIAMS         ";
    escuderia[7] = "McLAREN          ";
    escuderia[8] = "McLAREN          ";
    escuderia[9] = "WILLIAMS         ";
    escuderia[10] = "FORCE INDIA     ";
    escuderia[11] = "FERRARI         ";
    escuderia[12] = "LOTUS           ";
    escuderia[13] = "TORO ROSSO      ";
    escuderia[14] = "TORO ROSSO      ";
    escuderia[15] = "MARUSSIA        ";
    escuderia[16] = "SAUBER          ";
    escuderia[17] = "CATERHAM        ";
    escuderia[18] = "LOTUS           ";
    escuderia[19] = "SAUBER          ";
    escuderia[20] = "MARUSSIA        ";
    escuderia[21] = "CATERHAM        ";
    //Número de gran premios corrido
    ngpc[0] = 155;
    ngpc[1] = 135;
    ngpc[2] = 57;
    ngpc[3] = 224;
    ngpc[4] = 127;
    ngpc[5] = 65;
    ngpc[6] = 27;
    ngpc[7] = 257;
    ngpc[8] = 8;
    ngpc[9] = 201;
    ngpc[10] = 66;
    ngpc[11] = 202;
    ngpc[12] = 55;
    ngpc[13] = 47;
    ngpc[14] = 8;
    ngpc[15] = 27;
    ngpc[16] = 117;
    ngpc[17] = 8;
    ngpc[18] = 66;
    ngpc[19] = 27;
    ngpc[20] = 27;
    ngpc[21] = 68;
    //Puntos Ganados
    puntos[0] = 735.5;
    puntos[1] = 1238;
    puntos[2] = 113;
    puntos[3] = 1685;
    puntos[4] = 1511;
    puntos[5] = 195;
    puntos[6] = 59;
    puntos[7] = 1115;
    puntos[8] = 29;
    puntos[9] = 846;
    puntos[10] = 157;
    puntos[11] = 988;
    puntos[12] = 236;
    puntos[13] = 37;
    puntos[14] = 4;
    puntos[15] = 2;
    puntos[16] = 124;
    puntos[17] = 0;
    puntos[18] = 47;
    puntos[19] = 6;
    puntos[20] = 0;
    puntos[21] = 125;
    //Edad
    edad[0] = 29;
    edad[1] = 29;
    edad[2] = 25;
    edad[3] = 32;
    edad[4] = 27;
    edad[5] = 26;
    edad[6] = 24;
    edad[7] = 34;
    edad[8] = 21;
    edad[9] = 33;
    edad[10] = 24;
    edad[11] = 34;
    edad[12] = 28;
    edad[13] = 24;
    edad[14] = 20;
    edad[15] = 24;
    edad[16] = 31;
    edad[17] = 23;
    edad[18] = 29;
    edad[19] = 22;
    edad[20] = 23;
    edad[21] = 27;
    //Podios conseguidos
    podios[0] = 19;
    podios[1] = 60;
    podios[2] = 3;
    podios[3] = 96;
    podios[4] = 64;
    podios[5] = 0;
    podios[6] = 1;
    podios[7] = 50;
    podios[8] = 1;
    podios[9] = 1;
    podios[10] = 36;
    podios[11] = 4;
    podios[12] = 77;
    podios[13] = 9;
    podios[14] = 0;
    podios[15] = 0;
    podios[16] = 0;
    podios[17] = 0;
    podios[18] = 0;
    podios[19] = 0;
    podios[20] = 1;
    podios[21] = 0;
    
    bool quierosalir = false;
    int eleccion;
    while (quierosalir == false) {
        cout << "1. Mostrar lista de pilotos" << endl;
        cout << "2. Mostrar piloto con más puntos" << endl;
        cout << "3. Mostrar pilotos con menos puntos" << endl;
        cout << "4. Ordenar la lista por número de grandes premios corridos" << endl;
        cout << "9. Salir" << endl;
        cin >> eleccion;
        if (eleccion == 1) {
            //SELECCIÓN DEL PILOTO
            for (int i = 0; i <= 21 ; i++) {
                cout << nombre[i] << "\t\t - " << i << endl;
            }
            cout << "SELECCIONA EL PILOTO QUE QUIERAS: " << endl;
            int opcion;
            cin >> opcion;
            for (int i = 0; i <= 21 ; i++) {
                if (opcion == i) {
                    cout << "NOMBRE\t\t\t" << "GRANDES PREMIOS\t\t" << "PUNTOS\t\t" << "PODIOS\t\t" << "EDAD" << endl;
                    cout << nombre[i] << "\t" << ngpc[i] << "\t\t\t\t" <<  puntos[i] << "\t\t\t" << podios[i] << "\t\t\t" << edad[i] << endl;
                }
            }
        }
        if (eleccion == 2) {
            int mayor = 0;
            int piloto;
            for (int i = 0; i <=21; i++) {
                if (mayor <= puntos[i]) {
                    mayor = puntos[i];
                    piloto = i;
                }
            }
            cout << "NOMBRE\t\t\t" << "GRANDES PREMIOS\t\t" << "PUNTOS\t\t" << "PODIOS\t\t" << "EDAD" << endl;
            cout << nombre[piloto] << "\t" << ngpc[piloto] << "\t\t\t\t" <<  puntos[piloto] << "\t\t\t" << podios[piloto] << "\t\t\t" << edad[piloto] << endl;
        }
        if (eleccion == 3) {
            int menor = 999999;
            for (int i = 0; i <=21; i++) {
                if (menor >= puntos[i]) {
                    menor = puntos[i];
                }
            }
            int resultado[22];
            for (int i = 0; i <= 21; i++) {
                resultado[i] = -1;
            }
            int j = 0;
            for (int i = 0; i <= 21; i++) {
                if (puntos[i] == menor) {
                    resultado[j] = i;
                    j=j+1; //FALLO
                }
            }
            int x = 0;
            cout << "NOMBRE\t\t\t" << "GRANDES PREMIOS\t\t" << "PUNTOS\t\t" << "PODIOS\t\t" << "EDAD" << endl;
            while (resultado[x] != -1) {
                cout << nombre[resultado[x]] << "\t" << ngpc[resultado[x]] << "\t\t\t\t" <<  puntos[resultado[x]] << "\t\t\t" << podios[resultado[x]] << "\t\t\t" << edad[resultado[x]] << endl;
                x = x+1;
            }
        }
        if (eleccion == 4) {
            int orden[22]; //Vector que almacenará el orden de los pilotos según los GP que hayan corrido
            int ngpcCopia[22]; // Vector copia del vector ngpc
            for (int i = 0; i <= 21; i++) { // For que va a copiar el ngpc en ngpcCopia
                ngpcCopia[i] = ngpc[i];
            }
            int restantes = 21; //Variable que va a contar cuántos pilotos quedan por comparar
            int j = 0; // Variable que va a contar en que posición del vector orden hay que meter los pilotos
            while (restantes != 0) { //Bucle de ordenación
                int mayor = 0;
                int indice;
                bool elegido = false;
                for (int i = 0; i <=21; i++) {
                    if (mayor <= ngpcCopia[i]) {
                        if (ngpcCopia[i] != -1) {
                            mayor = ngpcCopia[i];
                            indice = i;
                            elegido = true;
                        }
                    }
                }
                if (elegido == true) {
                    orden[j] = indice; //Almacena la posición en el vector ngpc en el primero del vector orden.
                    j=j+1;
                    restantes=restantes-1;
                    ngpcCopia[indice]=-1;
                    elegido = false;
                }
            }
            cout << "NOMBRE\t\t\t" << "GRANDES PREMIOS\t\t" << "PUNTOS\t\t" << "PODIOS\t\t" << "EDAD" << endl;

            for (int i = 0; i < 21 ; i++) {
                cout << nombre[orden[i]] << "\t" << ngpc[orden[i]] << "\t\t\t\t" <<  puntos[orden[i]] << "\t\t\t" << podios[orden[i]] << "\t\t\t" << edad[orden[i]] << endl;
            }
        }
        if (eleccion == 9) {
            quierosalir = true;
        }
    }
    //Comentario para probar el github
    return 0;
}

