#include <iostream>
#include <Windows.h>
using namespace std;
char n, modo, r, continuar;
string jugador;
int puntosTotales = 0; 

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    cout << "Bienvenido/a jugador por favor ingrese su nombre: ";
    getline(cin, jugador);
    do {
        cout <<""<<endl;
        cout << "A Continuacion se le mostraran las opciones para poder jugar: " << endl;
        cout << "start-> z\nsalir-> x\n";
        cout << "ingresase la letra para realizar una accion: ";
        cin >> n;
    } 
    while (tolower(n) != 'z' && tolower(n) != 'x');
    if (tolower(n) == 'x')
    {
        return 0;
    }
    do
    {
    cout <<""<<endl; 
    cout << "A Continuacion se le mostraran los modos para jugar: " << endl;
    cout << "facil-> q\nnormal-> w\ndificil-> e\n";
    cout << "eliga la modalidad que desea jugar: ";
    cin >> modo;
    switch (modo)
    {
    case 'q':
        cout<<""<<endl;
        cout << "Elegiste: el modo facil "<< endl;
        cout << "A continuacion se le monstraran las preguntas y sus opciones"<< endl;
        cout<<""<<endl;
        cout<< "Pregunta 1 "<< endl;
        cout<<"¿Cuál es el color que se obtiene al mezclar el azul con el amarillo?"<< endl;
        cout<< "A) Morado-> a\nB) Verde-> b\nC) Naranja-> c\nD) Café-> d\n";
        do {
        cout << "cual es la respuesta? : ";
        cin >> r;
        if (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd') {
            cout << "tiene que elige una opcion entre a, b, c ,d, no sea pendejo porfavor\n";
        }
        } while (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd');
    
        if (tolower(r) == 'b') 
        {
        cout << "la respuesta correcta\n";
        puntosTotales += 100;
        } 
        else 
        {
        cout << "su respuesta es incorrecta, La respuesta correcta era la B) Verde.\n";
        }
        cout << "Puntos actuales de " << jugador << ": " << puntosTotales << " puntos.\n";

        cout<<""<<endl;
        cout<<"siguiente pregunta"<<endl;
        cout<<""<<endl;
        cout<< "Pregunta 2 "<< endl;
        cout<< "¿Cuántos días tiene un año bisiesto?"<< endl;
        cout<<"A) 365 días-> a\nB) 364 días-> b\nC) 366 días-> c\nD) 360 días-> d\n";
        do {
        cout << "cual es la respuesta? : ";
        cin >> r;
        if (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd') {
            cout << "tiene que elige una opcion entre a, b, c ,d, no sea pendejo porfavor\n";
        }
        } while (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd');
    
        if (tolower(r) == 'c') 
        {
        cout << "la respuesta correcta\n";
        puntosTotales += 100;
        } 
        else 
        {
        cout << "su respuesta es incorrecta, La respuesta correcta era la C) 366 días\n";
        }
        cout << "Puntos actuales de " << jugador << ": " << puntosTotales << " puntos.\n";

        cout<<""<<endl;
        cout<<"siguiente pregunta"<<endl;
        cout<<""<<endl;
        cout<< "Pregunta 3 "<< endl;
        cout<< "¿Qué tipo de animal es la ballena de acuerdo a su reproducción?"<< endl;
        cout<<"A) Mamífero-> a\nB) Pez-> b\nC) Reptil-> c\nD) Anfibio-> d\n";
        do {
        cout << "cual es la respuesta? : ";
        cin >> r;
        if (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd') {
            cout << "tiene que elige una opcion entre a, b, c ,d, no sea pendejo porfavor\n";
        }
        } while (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd');
    
        if (tolower(r) == 'a') 
        {
        cout << "la respuesta correcta\n";
        puntosTotales += 100;
        } 
        else 
        {
        cout << "su respuesta es incorrecta, La respuesta correcta era la A) Mamífero\n";
        }
        cout << "Puntos actuales de " << jugador << ": " << puntosTotales << " puntos.\n";
        break;

    case 'w':
        cout<<""<<endl;
        cout << "Elegiste: el modo normal ";
        cout << "Acontinuacion se le monstraran las preguntas y sus opciones"<< endl;
        cout<<""<<endl;
        cout<< "Pregunta 1 "<< endl;
        cout<<"¿En qué país europeo se encuentra la región de Transilvania, famosa por la leyenda de Drácula?"<< endl;
        cout<<"A) Hungría-> a\nB) Rumanía-> b\nC) Bulgaria-> c\nD) Polonia-> d\n";
        do {
        cout << "cual es la respuesta? : ";
        cin >> r;
        if (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd') {
            cout << "tiene que elige una opcion entre a, b, c ,d, no sea pendejo porfavor\n";
        }
        } while (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd');
    
        if (tolower(r) == 'b') 
        {
        cout << "la respuesta correcta\n";
        puntosTotales += 100;
        } 
        else 
        {
        cout << "su respuesta es incorrecta, La respuesta correcta era la B) Rumanía\n";
        }
        cout << "Puntos actuales de " << jugador << ": " << puntosTotales << " puntos.\n";

        cout<<""<<endl;
        cout<<"siguiente pregunta"<<endl;
        cout<<""<<endl;
        cout<< "Pregunta 2 "<< endl;
        cout<< "¿Cuál es el gas más abundante en la atmósfera de la Tierra?"<< endl;
        cout<<"A) Oxígeno-> a\nB) Dióxido de carbono-> b\nC) Nitrógeno-> c\nD) Hidrógeno-> d\n";
        do {
        cout << "cual es la respuesta? : ";
        cin >> r;
        if (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd') {
            cout << "tiene que elige una opcion entre a, b, c ,d, no sea pendejo porfavor\n";
        }
        } while (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd');
    
        if (tolower(r) == 'c') 
        {
        cout << "la respuesta correcta\n";
        puntosTotales += 100;
        } 
        else 
        {
        cout << "su respuesta es incorrecta, La respuesta correcta era la C) Nitrógeno\n";
        }
        cout << "Puntos actuales de " << jugador << ": " << puntosTotales << " puntos.\n";

        cout<<""<<endl;
        cout<<"siguiente pregunta"<<endl;
        cout<<""<<endl;
        cout<< "Pregunta 3 "<< endl;
        cout<< "¿Qué revolucionario invento se le atribuye históricamente a Johannes Gutenberg?"<< endl;
        cout<<"A) El telescopio-> a\nB) La bombilla eléctrica-> b\nC) La imprenta de tipos móviles-> c\nD) La brújula-> d\n";
        do {
        cout << "cual es la respuesta? : ";
        cin >> r;
        if (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd') {
            cout << "tiene que elige una opcion entre a, b, c ,d, no sea pendejo porfavor\n";
        }
        } while (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd');
    
        if (tolower(r) == 'c') 
        {
        cout << "la respuesta correcta\n";
        puntosTotales += 100;
        } 
        else 
        {
        cout << "su respuesta es incorrecta, La respuesta correcta era la C) La imprenta de tipos móviles\n";
        }
        cout << "Puntos actuales de " << jugador << ": " << puntosTotales << " puntos.\n";
        break;

    case 'e':
        cout<<""<<endl;
        cout << "Elegiste: el modo dificil ";
        cout << "Acontinuacion se le monstraran las preguntas y sus opciones"<< endl;
        cout<<""<<endl;
        cout<< "Pregunta 1 "<< endl;
        cout<<"¿Cuál es el único mamífero del mundo que posee la capacidad de volar activamente?"<< endl;
        cout<<"A) El murciélago-> a\nB) El ornitorrinco-> b\nC) La ardilla voladora-> c\nD) El colibrí-> d\n";
        do {
        cout << "cual es la respuesta? : ";
        cin >> r;
        if (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd') {
            cout << "tiene que elige una opcion entre a, b, c ,d, no sea pendejo porfavor\n";
        }
        } while (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd');
    
        if (tolower(r) == 'a') 
        {
        cout << "la respuesta correcta\n";
        puntosTotales += 100;
        } 
        else 
        {
        cout << "su respuesta es incorrecta, La respuesta correcta era la A) El murciélago\n";
        }
        cout << "Puntos actuales de " << jugador << ": " << puntosTotales << " puntos.\n";

        cout<<""<<endl;
        cout<<"siguiente pregunta"<<endl;
        cout<<""<<endl;
        cout<< "Pregunta 2 "<< endl;
        cout<< "¿Qué filósofo de la antigua Grecia fue el maestro directo de Alejandro Magno?"<< endl;
        cout<<"A) Sócrates-> a\nB) Platón-> b\nC) Aristóteles-> c\nD) Pitágoras-> d\n";
        do {
        cout << "cual es la respuesta? : ";
        cin >> r;
        if (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd') {
            cout << "tiene que elige una opcion entre a, b, c ,d, no sea pendejo porfavor\n";
        }
        } while (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd');
    
        if (tolower(r) == 'c') 
        {
        cout << "la respuesta correcta\n";
        puntosTotales += 100;
        } 
        else 
        {
        cout << "su respuesta es incorrecta, La respuesta correcta era la C) Aristóteles\n";
        }
        cout << "Puntos actuales de " << jugador << ": " << puntosTotales << " puntos.\n";

        cout<<""<<endl;
        cout<<"siguiente pregunta"<<endl;
        cout<<""<<endl;
        cout<< "Pregunta 3 "<< endl;
        cout<< "¿Cuál es el elemento más ligero y simple de toda la tabla periódica?"<< endl;
        cout<<"A) Helio-> a\nB) Litio-> b\nC) Hidrógeno-> c\nD) Oxígeno-> d\n";
        do {
        cout << "cual es la respuesta? : ";
        cin >> r;
        if (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd') {
            cout << "tiene que elige una opcion entre a, b, c ,d, no sea pendejo porfavor\n";
        }
        } while (tolower(r) != 'a' && tolower(r) != 'b' && tolower(r) != 'c' && tolower(r) != 'd');
    
        if (tolower(r) == 'c') 
        {
        cout << "la respuesta correcta\n";
        puntosTotales += 100;
        } 
        else 
        {
        cout << "su respuesta es incorrecta, La respuesta correcta era la C) Hidrógeno\n";
        }
        cout << "Puntos actuales de " << jugador << ": " << puntosTotales << " puntos.\n";
        break;
    default:
        cout << "no has elegiste ningun modo porfavor ingrese el modo que desea jugar";
        break;
    }
        if (puntosTotales >= 200) {
        break; 
        }
        cout << "\n¿Deseas intentar otra ves y seguir jugando? (s/n): ";
        cin >> continuar;

    } while (tolower(continuar) == 's');

    cout << "" << endl;
    if (puntosTotales >= 200) {
        cout << "FELICIDADES SHINJI, has ganado  " << puntosTotales << " puntos. Ya no tienes que jugar peruano. " << endl;
    } else {
        cout << "Fin de la partida. Conseguiste " << puntosTotales << "conseguiste puntos." << endl;
        cout << "No alcanzaste los 200 puntos necesarios." << endl;
    }
    cout << "" << endl;

    return 0;
}