// Mayela More.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// LA_CASA_DE_MEFISTO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    //DECLARAR VARIABLES
    //El iva lo deje en 16%
    int numart, anio_emitido, opc;
    float precio_unitario, iva = 1.16, total = 0;
    string nombre, descripcion, clasificacion, genero;

    //opciones

    cout << "\t***Mefisto_shop_gamer***\n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opc;
    //Empieza el switch
    switch (opc)
    {
    case 1: //Agregar Articulo
        cout << "\t***Ingrese el numero de serie del articulo** \n";
        cin >> numart;
        cout << "ingrese el nombre del articulo\n";
        cin.ignore();// asegura que cada carácter antes y después del espacio siguiente sea descartado 
        getline(cin, nombre); //permite ejecutar los espacios en la variable  almacenando el texto 
        //Tuve un fall con el getline ya que omitia el primer caraacter y al eliminarlo tanto de descripcion y clasificacion se me rompia el programa


        cout << "ingrese el descripcion del articulo\n";
        getline(cin, descripcion);
        cout << "ingrese la clasificacion del articulo\n";
        getline(cin, clasificacion);
        cout << "ingrese el anio emitido del articulo:\n";
        cin >> anio_emitido;

        //Al hacer un cambio ahora no de da la opcion de poner mi genero vamo a ver k rollo

        cout << "ingrese el genero del articulo:\n";
        cin >> genero;


        cout << "ingrese el precio unitario del articulo\n";
        cin >> precio_unitario;
        cout << "el valor del iva es" << iva;

        total = precio_unitario * iva;

        cout << "Precio total" << total;


        system("cls");

        cout << "\t***Numero del articulo:" << numart << "\n\t***Nombre del articulo:***" << nombre << "\n\t***Descripcion:***" << descripcion << "\n\t***La Clasificacion es:" << clasificacion << "\n\t***Genero" << genero << "\n\t***Lanzamiento:" << anio_emitido << "\n\t***Valor sin iva:" << precio_unitario << "\n\t***Iva:" << iva << "\n\t***Precio total con iva:" << total << endl;



        return main();

        break;
    case 2: //Modificar el articulo
        break;

    case 3: //Eliminar articulo
        break;

    case 4://Articulos vigentes
        break;

    case 5://limpiar pantalla
        system("cls"); //la diferencia del clean es que este se usa en web y cls en visual
        return main();
        break;

    case 6://Salir
        cout << "\t**Gracias por consultar la_casa_de_mefisto***";
        break;
    default:
        cout << "\t***POR FAVOR INGRESE UNA OPCION VALIDA***\n:";
        return main();
    }







}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
